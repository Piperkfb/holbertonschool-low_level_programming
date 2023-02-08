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
	char ptr[98];
	int s3l = 0;
	int sc = 0;

	/* Destination added to Return */
	while (*dest[sc] != '\0')
	{
		ptr[s3l] = *dest[sc];
		s3l++;
		sc++;
	}
	sc = 0;

	/* Source added to Return */
	while (*src[sc] != '\0')
	{
		ptr[s3l] = *src[sc];
		s3l++;
		sc++;
	}
	ptr[s3l] = '\0';
	/* Destination overwritten to Return */

	return (*ptr);
}
