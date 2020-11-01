#include "holberton.h"
/**
 *rot13 - function that rotate with 13 places.
 *
 *@s:char
 *
 * Return: char.
 */
char *rot13(char *s)
{
char *str = s, *rot13start = ROT13START, *rot13over = ROT13OVER;
	int i = 0;

	for (; *s; s++)
	{
		for (i = 0; rot13start[i]; i++)
			if (*s == rot13start[i])
			{
				*s = rot13over[i];
				break;
			}
	}
	return (str);
}
