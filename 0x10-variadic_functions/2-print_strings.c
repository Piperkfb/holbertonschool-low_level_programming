#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints a variadic amount of strings with a separator
 * @separator: The seperator
 * @n: The number of variadic elements
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int cnt = 0;
	va_list list;
	char *str;

	va_start(list, n);

	for (cnt = 0; cnt < n; cnt++)
	{
		str = va_arg(list, char *);

		if (str != NULL)
		{	printf("%s", str);
		}
		else
		{	printf("(nil)");
		}
		if (separator != NULL && cnt != (n - 1))
		{	printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
