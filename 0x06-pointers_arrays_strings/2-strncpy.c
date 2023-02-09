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
	int sc2 = 0;

	/* n number of source relacing destination */
	while (src[sc2] != src[n])
	{
		if (src[sc2] != '\0')
		{
			dest[sc] = src[sc2];
			sc++;
			sc2++;
		}
		else
		{
			dest[sc] = '\0';
			sc++;
			sc2++;
		}
	}
	return (dest);
}
