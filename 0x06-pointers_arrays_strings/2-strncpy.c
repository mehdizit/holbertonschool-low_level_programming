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
	char *x = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (x);
}
