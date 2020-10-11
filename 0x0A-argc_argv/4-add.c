#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - check for argument if it is digit and add to int number
 *@argc: integer
 *@argv: string
 *Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, reslt;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		reslt += atoi(argv[i]);
	}
	printf("%d\n", reslt);
	return (0);
}
