#include "holberton.h"

/**
 * _strcmp - compares s1 and s2
 * @s1: number 1
 * @s2: number 2
 *
 * Return: 0 if equal -15 is less than 15 if greater than
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;
	char a;
	char b;

	while (s1 != '\0' && s2 != '\0')
	{
		if (s1[n] = s2[n])
		{
			n++;
		}
		else
		{
		a = s1[n];
		b = s2[n];
		
			if (a < b)
			{
				return (-15);
			}
			if (a > b)
			{
				return (15);
			}
		}
	}
	if (s1[n] = '\0' && s2 = '\0')
	{
		return (0);
	}
}
