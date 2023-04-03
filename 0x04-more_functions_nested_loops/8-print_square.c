#include "main.h"

/**
 * print_square - prints # as a square. determined by size number
 * @size: The height and width of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int x;
	int y;

	x = 0;

	if (size > 0)
	{
		while (x < size)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
			(x++);
		}
	}
	else
	{
		_putchar('\n');
	}
}
