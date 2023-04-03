#include "3-calc.h"
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two numbers and returns sum
 * @a: Number 1
 * @b: Number 2
 * Return: sum
 */

int op_add(int a, int b)
{
	int x;

	x = (a + b);
	return (x);
}

/**
 * op_sub - Subtracts two numbers
 * @a: Number 1
 * @b: Number 2
 * Return: Sum
 */

int op_sub(int a, int b)
{
	int x;

	x = (a - b);
	return (x);
}

/**
 * op_mul - Multiplies two numbers
 * @a: Number 1
 * @b: Number 2
 * Return: Result
 */

int op_mul(int a, int b)
{
	int x;

	x = (a * b);
	return (x);
}

/**
 * op_div - Divides two numbers
 * @a: Number 1
 * @b: Number 2
 * Return: Result
 */

int op_div(int a, int b)
{
	int x;

	x = (a / b);
	return (x);
}

/**
 * op_mod - Returns modular of two numbers
 * @a: Number 1
 * @b: Number 2
 * Return: Result
 */

int op_mod(int a, int b)
{
	int x;

	x = (a % b);
	return (x);
}
