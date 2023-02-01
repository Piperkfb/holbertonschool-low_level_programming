#include "main.h"

/**
 * _isdigit - Checks variable c if it is a digit
 * @c: the char that is checked
 *
 * Return: 1 if a digit, 0 if other
 */

int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
	{
		return (1);
	}
	return (0);
}
