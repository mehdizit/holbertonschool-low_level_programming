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
	void *array;
	char *array1;
	unsigned int i;

	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	array1 = array;
	for (i = 0; i < (nmemb * size); i++)
	{
		array1[i] = '\0';
	}
	
	return (array);
}
