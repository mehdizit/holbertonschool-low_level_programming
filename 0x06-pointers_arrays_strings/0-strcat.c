#include "holberton.h"
/**
*_strcat - concatenates two strings
*@dest: Destination
*@src: source
*Return: char
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (i = 0; dest[i]; i++)
	{
	}
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';
	return (dest);
	_putchar('\n');
}
