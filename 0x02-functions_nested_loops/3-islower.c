#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 *_islower - character classification functions
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	for (c = 41; c <= 122; c++)
	{
		_putchar(c);

		if (c >= 97)

		{
		return (1);

		}

		else

		{
		return (0);

		}
	}
}
