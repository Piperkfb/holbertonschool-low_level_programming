#include "holberton.h"

/**
 * leet - caculator humor
 * @str: The string
 *
 * Return: The numerified string
 */

char *leet(char *str)
{
	int sc = 0;

	while (str[sc] != '\0')
	{
			if (str[sc] == 'a' || str[sc] == 'A')
			{
				str[sc] = '4';
				sc++;
			}
			else if (str[sc] == 'e' || str[sc] == 'E')
			{
				str[sc] = '3';
				sc++;
			}
			else if (str[sc] == 'o' || str[sc] == 'O')
			{
				str[sc] = '0';
				sc++;
			}
			else if (str[sc] == 't' || str[sc] == 'T')
			{
				str[sc] = '7';
				sc++;
			}
			else if (str[sc] == 'l' || str[sc] == 'L')
			{
				str[sc] = '1';
				sc++;
			}
			else
			{
				sc++;
			}

	}
	return (str);
}
