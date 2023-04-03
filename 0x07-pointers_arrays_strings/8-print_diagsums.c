#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the diagnal sums a matrix
 * @a: pointer to matrix
 * @size: size of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int sc = 0;

	for (sc = 0; sc < size; sc++)
	{
		sum1 += a[sc];
		a += size;
	}
	a -= size;
	for (sc = 0; sc < size; sc++)
	{
		sum2 += a[sc];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
