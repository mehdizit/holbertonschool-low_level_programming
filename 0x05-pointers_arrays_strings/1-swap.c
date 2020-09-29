#include "holberton.h"
#include <stdio.h>
/**
 * swap_int -swap two integer
 * @a:integer
 * @b:integer
 *
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
