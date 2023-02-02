#include "main.h"

/**
 * print_line - prints '_' for each value of n
 * @n: The ammount of lines printed
 *
 * Return: void
 */

void print_line(int n)
{
	int amm;

	for (amm = 0; amm < n; amm++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
