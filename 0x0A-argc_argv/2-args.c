#include "holberton.h"
#include <stdio.h>
/**
 *main - print arguments of commande line including name of programme
 *@argc: integer
 *@argv: string
 *Return: int
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
