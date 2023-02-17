#include "main.h"

/**
 * _pow_recursion - Returns the value of int to power of int
 * @x: The base number
 * @y: the power to
 * Return: The raised power, -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	int ans = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y ==0)
	{
		return (1);
	}
	
	ans *= _pow_recursion(x, y - 1);
		return (ans);
}
