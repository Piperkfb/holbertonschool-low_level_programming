#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: Number of bytes from s2
 * Return: pointer to memory that contains strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sc = 0;
	unsigned int len = n;
	char *memp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (sc = 0; s1[sc]; sc++)
	{
		len++;
	}

	memp = malloc(sizeof(char) * (len + 1));

	if (memp == NULL)
		return (NULL);

	len = 0;

	for (sc = 0; s1[sc]; sc++)
	{
		memp[len] = s1[sc];
		len++;

	}

	for (sc = 0; s2[sc] && sc < n; sc++)
	{
		memp[len] = s2[sc];
		len++;
	}

	memp[len] = '\0';
	return (memp);
}
