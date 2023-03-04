#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Puts name into the function f
 * @name: The name
 * @f: The function to run
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
