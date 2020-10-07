#include "holberton.h"
/**
 *_strlen_recursion - Return length of string
 *
 *@s : string
 *
 *Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
	length = length +	_strlen_recursion(s + 1);
	}

	return (length);
}

