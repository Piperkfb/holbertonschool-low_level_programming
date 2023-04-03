#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - plugs an array into a comparing function and returns when
 * true
 *
 * @array: The array compared
 * @size: The size of the array
 * @cmp: The comparing function
 * Return: The element space in which the comparison comes back true
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int sc = 0;
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (sc = 0; sc < size; sc++)
	{
		x = cmp(array[sc]);

		if (x != 0)
			return (sc);
	}
	return (-1);
}
