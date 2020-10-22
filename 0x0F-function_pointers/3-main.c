#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of argument
 * @argv: An array.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	int (*oper)(int, int);

	oper = get_op_func(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	if (oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = oper(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
