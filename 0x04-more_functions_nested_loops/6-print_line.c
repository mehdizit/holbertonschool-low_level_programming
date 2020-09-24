#include "holberton.h"
/**
 * print_line - prints an underscore n times
 * @n: number of lines printed
 *
 * Return: n
 */

void print_line(int n)
{
	int i;

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
