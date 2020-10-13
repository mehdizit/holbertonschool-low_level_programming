#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - return duplicate string in a new allocate memory
 *@str: string to duplicate
 *Return: string that are duplicate.
 *
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{}
	s = malloc(sizeof(char) * i);
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
