# C app
ADD_EXECUTABLE (test_glyphicons_c
	test_glyphicons.c
)
TARGET_LINK_LIBRARIES (test_glyphicons_c
	glyphicons
)
ADD_TEST (glyphicons_test_suite
	test_glyphicons_c
)
# CXX app
ADD_EXECUTABLE (test_glyphicons_cxx
	test_glyphicons.cxx
)
TARGET_LINK_LIBRARIES (test_glyphicons_cxx
	glyphicons
)
ADD_TEST (glyphicons_test_suite
	test_glyphicons_cxx
)
