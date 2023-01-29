#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @r: the checked number
 *
 * Return: variable r in absolute value
 */

int _abs(int r)
{
	if (r < 0)
	{
		r = (r * -1);
		return (r);
	}
	return (r);
}
