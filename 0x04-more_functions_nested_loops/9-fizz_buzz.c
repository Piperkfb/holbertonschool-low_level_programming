#include "main.h"
#include <stdio.h>

/**
 * main - Writes 1 - 100, Replace % 3 with Fizz and 5 with Buzz.
 *
 * Return: void
 */

int main(void)
{
	int x;

	x = 1;

	while (x <= 100)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz");
			(x++);
		}
		else if ((x % 3 == 0) && (x % 5 != 0))
		{
			printf("Fizz");
			(x++);
		}
		else if ((x % 5 == 0) && (x % 3 != 0))
		{
			printf("Buzz");
			(x++);
		}
		else if (x > 100)
		{
			break;
		}
		else
		{
			printf("%d", x);
			(x++);
		}
		if (x <= 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
