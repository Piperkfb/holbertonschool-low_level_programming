#include "holberton.h"

/**
 * cap_string - Captilizes first letter in every word in a string
 * @str: The string
 *
 * Return: The capilized string
 */

char *cap_string(char *str)
{
	int sc = 1;
	int sps = 0;
	char space[13] = {' ', '	', '\n', ',', ';', '.', '!', '?', '"', ')'};

	space[10] = '(';
	space[11] = '{';
	space[12] = '}';
	space[13] = '\0';

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[sc] != '\0')
	{
		/* Sees if current character is a word sperator */
		while (str[sc] != space[sps] && space[sps] != '\0')
		{
			sps++;
		}
		/* If the space checker reaches the end, continue next */
		if (space[sps] == '\0')
		{
			sc++;
			sps = 0;
		}
		/* If space chkr hits a flag, see if next char is lower */
		else
		{
			sc++;
			if (str[sc] >= 'a' && str[sc] <= 'z')
			{
				str[sc] = str[sc] - 32;
			}
			sps = 0;
		}
	}
	return (str);
}
