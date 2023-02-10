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
	int src_l = 0;

	/* find length of source */
	while (src[sc])
	{
		src_l++;
		sc++;
	}
	sc = 0;
	while ((sc <= src_l) && (sc != n))
	{
		dest[sc] = src[sc];
		sc++;
	}
	while (sc < n)
	{
		dest[sc] = '\0';
		sc++;
	}
	return (dest);
}
