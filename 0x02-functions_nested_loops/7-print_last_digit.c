#include "holberton.h"
/**
 * print_last_digit - display last digit.
 * @c:integer.
 * @lastdigit:integer.
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int lastdigit, c;

	lastdigit = n  % 10;
	if (lastdigit <  0)
	{
		lastdigit = -lastdigit;
		c = '0' + lastdigit;
		_putchar(c);
		return (lastdigit);
	}
	return (0);
}
