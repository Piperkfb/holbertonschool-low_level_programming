#include "main.h"

/**
 * _memset - filles memory with constant byte
 * @s: the string
 * @b: The characer
 * @n: The number of bytes
 *
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int sc = 0;

	while (sc <= n)
	{
		s[sc] = b;
		sc++;
	}
	return (*s);
}
