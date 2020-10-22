#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* get_op_func - that is function
* @s: char pointer s
*
* Return: integer.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].f != NULL && strcmp(ops[i].op, s) != 0)
		i++;
	return (ops[i].f);
}
