#include "main.h"

/**
 * print_most_numbers - prints numbers 0 through 9
 *
 *Return: Always 0
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; (x >= 0 && x <= 9); x++)
	{
		if ((x != 2) && (x != 4))
		{
			_putchar(x + '0');
		}
		else
		{
			(x++)
		}
	}
	_putchar('\n');
}
