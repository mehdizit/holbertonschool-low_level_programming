#include "holberton.h"
/**
 * more_numbers-10times0-9\n
 *
 * Return: void
 */
void more_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('0' + (j / 10));
			_putchar('0' +  (j % 10));
		}
		_putchar('\n');
	}
}

