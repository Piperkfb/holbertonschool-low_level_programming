#include "main.h"

/**
 * print_sign - prints +,-, or 0 relating to variable n
 * @n: the number that is checked
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	if (n < 0)
	{
		printf("-");
		return (-1);
	}
	if (n == 0)
	{
		printf("0");
		return (0);
	}
	return (void)
}
