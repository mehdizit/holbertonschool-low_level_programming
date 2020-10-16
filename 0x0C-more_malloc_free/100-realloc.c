#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_realloc - realloc memory space
 *@ptr: pointer to allocated memory
 *@old_size: size memory of previous alllocated for ptr
 *@new_size: new size to realloc
 *Return: new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newspace;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newspace = malloc(new_size);
		if (newspace == NULL)
			return (NULL);
		return (newspace);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newspace = malloc(new_size);
	if (newspace == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		newspace[i] = ((char *)ptr)[i];
	free(ptr);
	return (newspace);
}
