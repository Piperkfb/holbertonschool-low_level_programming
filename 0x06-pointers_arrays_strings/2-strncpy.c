#include "holberton.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination
 * @src: Source
 * @n: Number
 *
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int sc = 0;

	/* n number of source relacing destination */
	while (src[sc] != src[n])
	{
		dest[sc] = src[sc];
		sc++;
	}
	return (dest);
}
