#include "holberton.h"
/**
 *clear_bit - set bit at 0
 *@n: int
 *@index: int
 *Return: -1 if fail otherwise 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
		if (sizeof(int) * 8 < index)
		return (-1);
		*n = *n & ~(1 << index);
	return (1);
}
