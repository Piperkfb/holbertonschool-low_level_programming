#include "function_pointers.h"

/**
 * array_iterator - Takes elements of an array and plugs them into
 * the action function
 *
 * @array: The array
 * @size: The number of elements
 * @action: The function to plug into
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int sc = 0

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (sc = 0; sc < size; sc++)
	{
		action(array[sc]);
	}
}
