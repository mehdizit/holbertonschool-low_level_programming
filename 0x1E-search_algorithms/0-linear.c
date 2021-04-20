#include "search_algos.h"

/**
 * linear_search - function that searches for a value
 * @array: array to search target
 * @size: number of elements
 * @value: value to search
 * Return: first index where value is located or -1 if value is not present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
