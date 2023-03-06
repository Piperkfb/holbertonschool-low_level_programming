#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints results of an operation
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *symb;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	symb = argv[2];
	num2 = atoi(argv[3]);
	fun = get_op_func(argv[2]);

	if (fun == NULL)
	{
		printf("Error2\n");
		exit(99);
	}

	if ((*symb == '/' && num2 == 0) || (*symb == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(symb)(num1, num2));
	
	return (0);
}
