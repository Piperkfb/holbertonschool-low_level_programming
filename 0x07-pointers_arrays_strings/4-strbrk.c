#include "main.h"

/**
 * _strbrk - Seaches a string for any set of bytes
 * @s: the string
 * @accept: The set of bytes
 *
 * Return: Pointer to first instance of byte
 */

char *_strpbrk(char *s, char *accept)
{
	int sc = 0;
	int ac;
	char *p;
	
	while (s[sc] != '\0')
	{
		for (ac = 0; accept[ac] != '\0'; ac++)
		{
			if (s[sc] == accept[ac])
			{
				p = &accept[ac];
				return (p);
			}
		}
		sc++;
	}
	return ('\0');
}
