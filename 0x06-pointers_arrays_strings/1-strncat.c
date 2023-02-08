#include "holberton.h"

/**
 * _strncat - appends n number of array of src into destination.
 * @dest: Destination
 * @src: Source
 * @n: The number spot of array
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int sc = 0;
	int sc2 = 0;

	/* Destination moved to the end */
	while (dest[sc] != '\0')
	{
		sc++;			
	}

	/* n letters of Source added to Destination */
	while (src[sc2] != n)
	{
		dest[sc] = src[sc2];
		sc++;
		sc2++;
	}
	dest[sc] = '\0';

	return (dest);
}
