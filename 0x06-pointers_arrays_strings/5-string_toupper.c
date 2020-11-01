#include "holberton.h"
/**
 **string_toupper - reverse lower case to upper case
 *
 *@s:char
 *
 * Return: char.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i]  >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
