#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*_strlen - length
*@s: string
*Return: length
*/
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
