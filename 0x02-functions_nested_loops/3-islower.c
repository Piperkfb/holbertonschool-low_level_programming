#include "main.h"

/**
 * _islower - Is clowercase?
 * @c: The letter that is checked
 *
 * Return: 1 for lower, 0 for ect.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
