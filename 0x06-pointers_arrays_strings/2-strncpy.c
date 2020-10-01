#include "holberton.h"
/**
 * _strncpy - copie a string
 * @dest:char
 *  @src:char
 * @n:int
 * Return:char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *start = dest;

	for (i = 0; (src[i] != '\0') && (src[i] >= n); i++)
	{
		dest[i] = dest[i];
	       
	}
	for (j = i; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (start);
}
