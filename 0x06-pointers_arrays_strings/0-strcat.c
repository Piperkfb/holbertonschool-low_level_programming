#include "holberton.h"

/**
 * _strcat - appends src string to dest string
 * @dest: Destination
 * @src: Source
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int sc2 = 0;
	int sc = 0;

	/* Destination moved to the end */
	while (dest[sc] != '\0')
	{
		sc++;
	}
	sc = 0;

	/* Source added to Destinarion */
	while (src[sc2] != '\0')
	{
		dest[sc] = src[sc2];
		sc2++;
		sc++;
	}
	dest[sc] = '\0';

	return (dest);
}
