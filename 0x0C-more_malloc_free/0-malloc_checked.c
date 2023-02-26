#include "main.h"
#include <stdio.h>

void *malloc_checked(unsigned int b)
{
	void *memp = malloc(b);

	if (memp == NULL)
	{
		exit(98);
	}

	return (mem);
}
