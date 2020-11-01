#include "holberton.h"
/**
 * _strncpy - copie a string
 * @dest:char
 *  @src:char
 * @n:int
 * Return:char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *start = dest;

	for (i = 0; src[i] && i < n; i++)
	{
		start[i] = src[i];
	}
	for (j = i; j < n; j++)
	{
		start[j] = '\0';
	}
	return (start);
}
