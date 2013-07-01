CMAKE_MINIMUM_REQUIRED (VERSION 2.6)
PROJECT (glyphicons)

# Find imagemagick's convert app
FIND_PROGRAM (convert_APP
	convert
)
IF (convert_APP-NOTFOUND)
	MESSAGE (FATAL "Imagemagick not found.")
ENDIF ()

FILE (GLOB GLYPHICONS_PNG "glyphicons/png/*.png")
FILE (MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/glyphicons")

FOREACH (GLYPHICON_PNG ${GLYPHICONS_PNG})
	# Extract filename without extension
	GET_FILENAME_COMPONENT (GLYPHICON_WE ${GLYPHICON_PNG} NAME_WE)
	# Add .xpm's as targets
	ADD_CUSTOM_COMMAND (
		OUTPUT "${GLYPHICON_WE}.xpm"
		COMMAND ${convert_APP} ${GLYPHICON_PNG} "${CMAKE_CURRENT_BINARY_DIR}/${GLYPHICON_WE}.xpm"
		DEPENDS ${GLYPHICON_PNG}
	)
	# Add output filename to list
	LIST (APPEND GLYPHICON_SOURCES
		"${GLYPHICON_WE}.xpm"
	)
ENDFOREACH ()

INCLUDE_DIRECTORIES (
	${CMAKE_CURRENT_BINARY_DIR}/
	include/
)

ADD_CUSTOM_TARGET (make_glyphicons_xpm
	DEPENDS ${GLYPHICON_SOURCES}
)

ADD_LIBRARY (glyphicons
	"src/glyphicons.c"
)

ADD_DEPENDENCIES (glyphicons make_glyphicons_xpm)