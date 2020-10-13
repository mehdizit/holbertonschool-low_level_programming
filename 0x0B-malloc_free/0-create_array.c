#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - function to create an array
 *@size: size of array
 *@c: character to initialize the array "tab" with.
 *Return: array.
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	tab = malloc(size * sizeof(char));
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}
	return (tab);
}
