#include "main.h"

/**
 *print_diagonal - prints n ammount of diagnoal lines
 *@n: The number of lines
 *
 *Return: void
 */

void print_diagonal(int n)
{
	int x;
	int cnt;

	while (x <= n)
	{
		for (cnt = 1; cnt < x; cnt++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
		(x++);
	}
}
