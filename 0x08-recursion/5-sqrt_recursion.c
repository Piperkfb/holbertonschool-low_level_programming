#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns square root of a number
 * @n: The number
 * @x: The counter
 * Return: The square root, if no natual sqrt- -1
 */
int _findsqrt(int n, int x);

int _sqrt_recursion(int n)
{
	return (_findsqrt(n, 1));
}

/**
 * _findsqrt - Finds if n has sqrt
 * @n: root number
 * @x: increasing checker
 * Return: sqrt, -1 if not existing
 */
int _findsqrt(int n, int x)
{
	int sqrt = (x * x);

	if (sqrt > n)
	{	return (-1);
	}
	if (sqrt == n)
	{	return (x);
	}
	return (_findsqrt(n, x + 1));
}
