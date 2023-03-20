#include "main.h"

/**
 * set_bit - 
 * @n: pointer to bit
 * @index: the position
 * Return: 1 success, -1 error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
