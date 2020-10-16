#include "holberton.h"
#include <stdlib.h>
/**
 *_lenstr - count the lenght of initial string str to duplicate.
 *@str: string to duplicate
 *Return: lenght of string.
 *
 */
int _lenstr(char *str)
{
	int i, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
/**
 *_strdup - return duplicate string in a new allocate memory
 *@str: string to duplicate
 *Return: string that are duplicate.
 *
 */
char *_strdup(char *str)
{
	char *stral;
	int size, i;

	if (str == NULL)
	{
		return (NULL);
	}
	size =  _lenstr(str);
	stral = malloc(sizeof(char) * size);
	if (stral == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		stral[i] = str[i];
	}
	stral[i] = '\0';
	return (stral);
}
