#include "holberton.h"
/**
 * more_numbers - prints 0-9\n 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' +  j % 10);
			
		}
		_putchar('\n');	}
}

