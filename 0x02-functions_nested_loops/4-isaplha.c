#include

/**
 * _isalpha - Is c a number, or a letter?
 *@c: the variable that's checked
 *
 * Return: 1 for true, 0 for ect.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
