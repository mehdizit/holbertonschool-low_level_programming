#include "holberton.h"

char *leet(char *str)
{
	{
	int i, j;
	char digit[] = {'4', '3', '0', '7', '1'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((str[i] == lower[j]) || (str[i] == upper[j]))
				str[i] = digit[j];
		}
	}

	return (str);
	}
}
