#include "holberton.h"
/**
 * _strspn - get the lenght of prefix substring
 * @s:string
 * @accept:string
 * Return:unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int result = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				result = result +  1;
				break;
			}
		}
		if (*(accept + j) == '\0')
			break;
	}
	return (result);
} 
