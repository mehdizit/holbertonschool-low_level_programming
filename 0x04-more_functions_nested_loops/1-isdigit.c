#include "holberton.h"
/**
 * _isdigit - check the upper case.
 *@c:char.
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
