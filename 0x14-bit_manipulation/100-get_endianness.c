#include "holberton.h"

/**
 *get_endianness - check the little or big_endian mode to store integger
 *@void: void.
 *Return: 1 if liittle endian or 0 if big endian.
 */
int get_endianness(void)
{
	unsigned int i = 2;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
