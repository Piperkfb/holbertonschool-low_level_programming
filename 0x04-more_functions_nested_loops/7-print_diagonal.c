#include "main.h"

/**
 * print_diagonal - prints n ammount of diagnoal lines
 * @n: The number of lines
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int x;
	int y;

	x = 1;

	if (n > 0)
	{
		while (x <= n)
		{
			for (y = 1; y < x; y++)
			{
				_putchar(' ');
			}	
		_putchar(92);
		_putchar('\n');
		(x++);
		}
	}
	else
	{
		_putchar('\n');
	}
}
