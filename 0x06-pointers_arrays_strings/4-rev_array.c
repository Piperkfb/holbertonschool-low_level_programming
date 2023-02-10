#include "holberton.h"

/**
 * reverse_array - Reverses each element of a
 * @a: The array
 * @n: The element
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x = n;
	char y;
	int sc = 0;

	while (sc <= x)
	{
		y = a[sc];
		a[sc] = a[x];
		a[x] = y;
		sc++;
		x--;
	}
}
