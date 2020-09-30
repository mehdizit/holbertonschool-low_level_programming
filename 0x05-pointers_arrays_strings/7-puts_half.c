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
	int lenth = 0;
	int half;

	while (*p)
	{
		lenth++;
		p++;
	}
	half = (lenth / 2);
	for (i = half; i <= lenth; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
