#include "main.h"

/**
 * is_prime_number - Takes number and inputs it to checker
 * _checker - Checks if number is prime
 * @n: The number
 * @x: The incrementing checker
 * Return: 1 if prime, 0 otherwise
 */
int _checker(int n, int x);

int is_prime_number(int n)
{
	if (n == 1)
	{	return (1);
	}
	if (n % 2 == 0)
	{	return (0);
	}
	return (_checker(n, 2));
}
/**
 * _checker - Checks prime num
 * @n: Number
 * @x: As says above
 * Return: You know
 */
int _checker(int n, int x)
{
	if (n < 2 || n % x == 0)
	{	return (0);
	}
	else if (x > (n / 2))
	{	return (1);
	}
	else
		return (_checker((x + 1), n));
}
