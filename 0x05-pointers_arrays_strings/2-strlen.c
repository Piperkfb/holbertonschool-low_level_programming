#include "main.h"
#include <string.h>

/**
 * _strlen - Returns length of a string
 * @s The string
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int sl;

	while (*s != '/0')
	{
	(*s++);
	(sl++);
	}
	return (sl);
}
