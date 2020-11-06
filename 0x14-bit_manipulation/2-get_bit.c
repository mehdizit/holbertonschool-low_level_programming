#include "holberton.h"
/**
 *get_bit - get value of current bit
 *@n: int
 *@index: int
 *Return: the value of a bit at the current index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	char bit = ((n >> index) & 1);

	return (0);
}
