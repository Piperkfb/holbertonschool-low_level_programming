#include "main.h"

/**
 * swap_int - Takes two pointers and swaps values
 * @a: value 1
 * @b: value 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
