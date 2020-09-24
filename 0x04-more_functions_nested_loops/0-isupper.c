#include "holberton.h"
/**
 * _isupper-check for upper case. 
 *@c:char
 * Return: Always 0.
 */
int _isupper(int c)
{
	while ((c >= 41) && (c <= 90))
			{
				return (1);
				_putchar('\n');
			}
	return (0);
	_putchar('\n');
}
