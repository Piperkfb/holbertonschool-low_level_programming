#include "holberton.h"

/**
 * string_toupper - changes all letters to uppercase
 * @src: The string
 *
 * Return: The uppercase version
 */

char *string_toupper(char *src)
{
	int sc = 0;

	while (src[sc] != '\0')
	{
		if (src[sc] >= 'a' && src[sc] <= 'z')
		{
			src[sc] = src[sc] - 32;
			sc++;
		}
		else
		{
			sc++;
		}
	}
	return (src);
}
