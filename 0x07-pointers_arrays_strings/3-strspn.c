#include "main.h"

/**
 * _strspn - Gets length of prefix substring
 * @s: The string
 * @accept: the Substring
 *
 * Return: The number of bytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int byt = 0;
	int sc = 0;
	int ac;

	while (s[sc] != '\0')
	{
		for (ac = 0; accept[ac] != '\0'; ac++)
		{
			if (s[sc] == accept[ac])
			{
				sc++;
				byt++;
				break;
			}
		}
		if (accept[ac] == '\0')
		{
			return (byt);
		}
	}
	return (byt);
}
