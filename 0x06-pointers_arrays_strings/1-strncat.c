#include "holberton.h"
/**
*_strncat - concatenates two strings
*@dest: Destination
*@src: source
*@n: integer
*Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
