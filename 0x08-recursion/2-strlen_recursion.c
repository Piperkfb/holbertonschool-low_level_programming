#include "main.h"

/**
 * _strlen_recursion - return string length
 * @s: the string
 * Return: string length, -1 on error
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
		return (len);
}
