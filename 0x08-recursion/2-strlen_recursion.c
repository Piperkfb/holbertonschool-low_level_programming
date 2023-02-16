#include "main.h"

/**
 * _strlen_recursion - return string length
 * @s: the string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		_srtlen_recursion(s + 1);
		len++;
	}
	return (len);
}
