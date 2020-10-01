#include "holberton.h"
/**
 **rot13 - rotate with 13 places.
 *
 *@start:char
 *
 * Return: char.
 */
char *rot13(char *start)
{
	int i, j;

	for (j = 0; start[j] != '\0'; j++)
	{
	}
	for (i = 0; i < j; i++)
	{
		if ((*start >= 'a' && *start < 'n') || (*start >= 'A' && *start < 'N'))
		{
			*start += 13;
		}
		else
		{
			*start -= 13;
		}
	}
	return (start);
}
