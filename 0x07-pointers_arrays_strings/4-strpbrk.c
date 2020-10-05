#include "holberton.h"
/**
 **_strpbrk - locates char in string
 * @s:pointer to string
 * @accept:pointer to string
 *
 * Return:char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
