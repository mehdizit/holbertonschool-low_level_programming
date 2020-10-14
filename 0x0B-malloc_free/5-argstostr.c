#include "holberton.h"
#include <stdlib.h>

/**
 **argstostr - concatenate argument from commande line
 *@ac: numbre of arguments to concatenate
 *@av: the string of argument.
 *
 *Return: string
 */


char *argstostr(int ac, char **av)
{
	char *ch;
	int i, j, im, size;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}

	ch = malloc(sizeof(char) * size + 1);

	if (ch == NULL)
		return (NULL);

	im = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			ch[im++] = av[i][j];

		ch[im++] = '\n';
	}



	return (ch);
}
