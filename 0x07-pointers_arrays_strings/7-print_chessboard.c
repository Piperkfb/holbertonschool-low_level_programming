#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: dunno rn
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int sc1 = 0;
	int sc2 = 0;

	for (sc1 = 0; sc1 < 8; sc1++)
	{
		for (sc2 = 0; sc2 < 8; sc2++)
		{
			_putchar(a[sc1][sc2]);
		}
		_putchar('\n');
	}
}
