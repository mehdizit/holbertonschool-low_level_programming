#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i, e1, e2, result;
	i = 1;
	if (i < argc)
	{
		for(i = 1; i < argc - 1; i++)
		{
			e1 = atoi (*argv);
			e2 = atoi (*(argv + 1));
			result = (e1 * e2);
			printf("%d\n", result);
		}
	}
	return (result);
}
