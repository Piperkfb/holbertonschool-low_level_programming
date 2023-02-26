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
	int sc = 0;
	int len = n;
	void *memp;

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
