#include "main.h"

/**
 * _puts - prints string followed by a new line
 * @str: The string that is placed
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
