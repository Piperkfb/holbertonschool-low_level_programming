#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: pointer to character if found, null if not found
 */

char *_strchr(char *s, char c)
{
	int sc = 0;
	char *p;

	while (s[sc] != '\0')
	{
		if (s[sc] == c)
		{
			p = &s[sc];
			return (p);
		}
		else
		{
			sc++;
		}
	}
	return (NULL);
}
