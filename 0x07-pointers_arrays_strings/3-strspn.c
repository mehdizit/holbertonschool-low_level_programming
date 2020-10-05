#include "holberton.h"

 char *_strchr(char *s, char c)
 {
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
 }
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s && _strchr(accept, *s))
	{
		s++;
		i++;
	}
	return (i);
}
