#include "holberton.h"

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
