#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - compute sum of left and right diagonal of matrix
 * @a:pointer to int
 *
 * @size:integer
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a = a + size;
	}
	a = a - size;
	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
