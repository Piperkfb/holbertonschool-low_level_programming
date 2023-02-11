#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: the bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int sc = 0;
	int num = n;

	while (sc < num)
	{
		dest[sc] = src [sc];
		sc++;
	}
	return (dest);
}
