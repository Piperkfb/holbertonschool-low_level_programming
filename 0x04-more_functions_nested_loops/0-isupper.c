#include "main.h"

/**
 * _isupper - Checks variable c if it is upper case
 * @c: the char that is checked
 *
 * Return: 1 if upper, 0 if other
 */

int _isupper(int c)
{
	if (c <= 65 && c >= 90)
	{
		return (1);
	}
	
	return (0);
}
