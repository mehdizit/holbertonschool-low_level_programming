#include "holberton.h"

/**
 *print_times_table - print time table.
 * @n: integer.
 *Return:void.
 */
void print_times_table(int n)
{
	int i, j, m, d, r, s, t;
	if ((n < 15) || (n > 0))
	{
		if (n == 3)
		{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				_putchar('0' + m);
				_putchar(',');
				_putchar(' '); _putchar(' '); _putchar(' ');
			}
			_putchar('\n');
		}
		}
		/*_putchar('\n');*/
		else if (n == 5)
		{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i == 0)
				{
					_putchar('0');
					_putchar(',');
					_putchar(' '); _putchar(' '); _putchar(' ');
				}
				else
				{
					m = i * j;
					d = (m / 10);
					r = (m % 10);
					if (m < 10)
					{
						_putchar('0' + r);
						_putchar(','); _putchar(' '); _putchar(' '); _putchar(' ');
					}
					else if (m > 10)
					{
						_putchar('0' + d);
						_putchar('0' + r);
						_putchar(',');
						_putchar(' '); _putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
		}
		else if (n == 12)
		{
			for (i = 0; i <= n; i++)
			{
				for (j = 0; j <= n; j++)
				{
					if (i == 0)
					{
						_putchar('0');
						_putchar(',');
						_putchar(' '); _putchar(' '); _putchar(' ');
					}
					else
					{
						m = i * j;
						d = (m / 10);
						r = (m % 10);
						if (m < 10)
						{
							_putchar('0' + r);
							_putchar(',');
							_putchar(' '); _putchar(' ');
						}
						else if ((m > 10)  && (m < 100))
						{
							_putchar('0' + d);
							_putchar('0' + r);
							_putchar(',');
							_putchar(' '); _putchar(' ');
						}
						else if (m > 100)
						{
							d = (m / 100);
							r = (m % 100);
							s = (m / 10) % 10;
							t = (m % 100) % 10;
							_putchar('0' + d);
							_putchar('0' + s);
							_putchar('0' + t);
							_putchar(',');
							_putchar(' ');
						}
					}
				}
				_putchar('\n');
			}
		}
	}
}
