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

	while (s[i] != '\0')
	{
		if (s[i]  >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
