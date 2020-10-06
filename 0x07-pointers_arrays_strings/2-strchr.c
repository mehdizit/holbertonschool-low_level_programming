#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates char in string
 * @s: pointer to string
 * @c: char to locate
 *
 * Return: pointer to first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
