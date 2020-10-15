#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocate size memory of space for nmemb of array.
 *@nmemb: numbre of elements of array
 *@size: space of memory to pointed to
 *Return: space of memory allocated for array that pointed to.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0  || size == 0)
	{
		return (NULL);
	}
	char *array;

	array = malloc(nmemb * size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
