#include <iostream>
#include <algorithm>
#include "glyphicons/glyphicons.h"

int
main()
{
	// potentialy dangerous!
	char *** it = std::find(glyphicons, glyphicons + 10000, (char**)NULL);
	std::advance(it, -1);
	if (std::distance(glyphicons, it) != 419)
	{
		return 1;
	}
}