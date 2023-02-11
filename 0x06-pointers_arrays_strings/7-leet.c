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
	int sp = 0;
	char lt[] = "aAeEoOtTlL";
	char nm[] = "4433007711";
	
	while (str[sc] != '\0')
	{
		for (sp = 0; sp <= 9; sp++)
		{
			if (str[sc] == lt[sp])
			{
				str[sc] = nm[sp];
			}
		}
		sc++;
	}
	return (str);
}
