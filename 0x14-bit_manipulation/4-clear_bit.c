#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at index
 * @n: pointer to bit
 * @index: The position
 * Return: 1 success, -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
