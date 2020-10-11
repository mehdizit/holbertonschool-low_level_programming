#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - print priduct of two arguments
 *@argc: int
 *@argv: string
 *
 *Return: int.
 */
int main(int argc, char *argv[])
{
	int result, e1, e2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	{
		e1 = atoi(argv[1]);
		e2 = atoi(argv[2]);
		result = (e1 * e2);
		printf("%d\n", result);
	}
	return (0);
}
