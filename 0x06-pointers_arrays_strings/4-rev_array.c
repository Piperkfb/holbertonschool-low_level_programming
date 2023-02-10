#include "holberton.h"

/**
 *
 *
 *
 *
 *
 *
 */

void reverse_array(int *a, int n)
{
	int x = (n - 1);
	int y;
	int sc = 0;

	while (sc <= x)
	{
		a[sc] = y;
		a[sc] = a[x];
		a[x] = y;
		sc++;
		x--;
	}
}
