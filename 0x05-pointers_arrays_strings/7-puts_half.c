#include "holberton.h"

/**
*puts_half - check the code for Holberton School students.
*
*@str:char pointer to string.
*
*/
void puts_half(char *str)
{
	int i;
	char *p = str;
	int length_of_the_string = 0;
	int n;

	while (*p)
	{
		length_of_the_string++;
		p++;
	}
	n = (length_of_the_string - 1) / 2;
	for (i = n; i <= length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
