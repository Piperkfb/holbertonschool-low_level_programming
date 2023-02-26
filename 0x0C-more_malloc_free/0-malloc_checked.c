#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: number of bytes
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *memp = malloc(b);

	if (memp == NULL)
	{
		exit(98);
	}

	return (mem);
}
