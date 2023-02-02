#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int x;
	int y;

	y = 0;
	while (y <= 10)
	{
		for (x = 0; (x >= 0 && x <= 14); x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}

			_putchar((x % 10) + '0');
		}

		_putchar('\n');
		x = 0;
		(y++);
	}
}
