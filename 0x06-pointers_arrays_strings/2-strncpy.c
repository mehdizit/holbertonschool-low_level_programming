#include "holberton.h"
/**
*_strncpy - strings into dest
*@dest: Destination
*@src: source
*@n: integer
*Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	_putchar('\n');

	return (dest);
}
