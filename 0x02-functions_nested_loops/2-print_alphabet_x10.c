#include "main.h"

/**
 * print_alphabet_x10 - As says
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int x;

	x = 1;

	while (x <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		((x++));
	}
}
