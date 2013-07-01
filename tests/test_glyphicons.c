#include <stdio.h>
#include <stdlib.h>
#include "glyphicons/glyphicons.h"

/**
 * Calculates total amount of glyphs
 */
int get_total_glyphicons()
{
	int total = 0;
	char *** it = glyphicons;
	while (it++ && *it)
	{
		++total;
	}
	return total;
}

int
main()
{
	int total;
	if ((total = get_total_glyphicons()) != 419)
	{
		fprintf(stderr, "%d\n", total);
		return 1;
	}
	return 0;
}