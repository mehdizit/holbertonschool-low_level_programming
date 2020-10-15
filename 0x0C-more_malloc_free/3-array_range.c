#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - allocate memory to arrange int from min to max
 *@min: integer
 *@max: integer
 *Return: array of integer.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		array[i] = min++;
	}
	return (array);
}
