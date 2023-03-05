#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints a variatic amount of numbers along a seperator
 * @separator: The character that seperates each number
 * @n: The number of elements
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int cnt = 0;
	va_list list;

	if (n <= 0)
		return;

	va_start(list, n);
	for (cnt = 0; cnt < n; cnt++)
	{
		printf("%i", va_arg(list, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
