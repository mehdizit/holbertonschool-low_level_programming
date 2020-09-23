#include "holberton.h"
/**
 * times_table- prints the times table up to 9
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, d, c, e;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			d = c % 10;
			e = c / 10;
			if (a == 0)
			{
				if (b == 9)
				{
				_putchar('0');
				}
				else
				{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			}
			else if (a <= 9)
			{
				if (c < 10)
				{
					if (b == 9)
					{
					_putchar('0' + d);
					}
					else
					{
					_putchar('0' + d);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					}
				}
				else if (c >= 10)
				{
					if (b == 9)
					{
					_putchar('0' + e);
					_putchar('0' + d);
					}
					else
					{
				_putchar('0' + e);
				_putchar('0' + d);
				_putchar(',');
				_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
}
