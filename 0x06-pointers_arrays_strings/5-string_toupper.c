#include "holberton.h"

/**
 * string_toupper - changes all letters to uppercase
 * @*: The string
 *
 * Return: The uppercase version
 */

char *string_toupper(char *)
{
	int sc = 0;

	while (*[sc] != '\0')
	{
		if (*[sc] >= 'a' && *[sc] <= 'z')
		{
			*[sc] = *[sc - 32];
			sc++;
		}
	}
}
