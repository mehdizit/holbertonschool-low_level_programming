#include "holberton.h"
/**
 **cap_string - capitalize a words
 *
 *@s:char
 *
 * Return: char.
 */
char *cap_string(char *s)
{
char c[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', ' ', '\n'};
	int i, j;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	for (i = 1; s[i]; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == c[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
