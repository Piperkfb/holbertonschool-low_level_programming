#include "main.h"

/**
 * factorial - finds factor of given int
 * @n: the given int
 *
 * Return: The factorial, -1 if error
 */

int factorial(int n)
{
	int fact = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	fact *= factorial(n - 1);
		return (fact);
}
