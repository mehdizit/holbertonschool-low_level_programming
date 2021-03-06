#include "holberton.h"

/**
 *set_bit - to  set 1 at a given position
 *@n: int
 *@index: int
 *Return: -1 if faild otherwise 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);
		*n = *n | (1 << index);
	return (1);
}
