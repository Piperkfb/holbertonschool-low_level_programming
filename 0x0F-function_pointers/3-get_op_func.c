#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - Finds correct function needed to pass
 * @s: Symbol indicating operation
 * Return: Pointer to correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t oper[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	
	int cnt = 0;

	while (oper[cnt].op != s && oper[cnt].op != NULL)
	{
		cnt++;
	}
	return(oper[cnt].f);
}
