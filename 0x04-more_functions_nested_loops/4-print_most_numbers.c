#include "holberton.h"
/**
 * print_most_numbers - prints 0-9\n
 *
 * Return:Always void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if ((i != 50) && (i != 52))
		{
			_putchar(i);
		}
	}
}
