#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - convert to an integer
 * @s:string
 *
 * Return:integer
 */
int _atoi(char *s)
{
	int i, res, sign, result;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '9' || s[i] > '0')
		{
			res = res * 10 + s[i] - '0';
		}
		else if (s[i] == '-')
		{
			sign = sign * 10 + s[i] - '0';
		}
		result = sign * res;
	}
	return (result);
}
