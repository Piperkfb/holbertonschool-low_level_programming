#include "main.h"
#include <stdio.h>

/**
 * fizzbuzzer - Writes 1 - 100, replacing dividens of 3 with 'Fizz' and dividens 5 with 'Buzz'. If both, 'Fizz Buzz'
 *
 * Return: void
 */

void main(void)
{
	int x;
	x = 1;

	while (x <= 100)
	{
		if ((x % 3 == 0)&&(x % 5 == 0))
		{
			printf("FizzBuzz");
			(x++);
		}
		else if ((x % 3 == 0)&&(x % 5 != 0))
		{
			printf("Fizz");
			(x++);
		}
		else if ((x % 5 == 0)&&(x % 3 != 0))
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
		printf(" ");
	}
}
