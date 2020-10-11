#include "holberton.h"
#include <stdio.h>
/**
 *main - print number of arguments.
 *@argc: int
 *@argv: sting
 *
 *Return: int.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	for (i = 0; i < argc - 1; i++)
	{}
	printf("%d\n", i);
	return (0);
}
