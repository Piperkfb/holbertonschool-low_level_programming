#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip
 * @n: the number
 * @m: The flipp number
 * Return: The needed number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
