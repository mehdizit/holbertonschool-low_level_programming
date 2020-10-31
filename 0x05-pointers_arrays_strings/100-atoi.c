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
	int i, j, n, sign, result, k;

	i = 0;
	sign = 1;
	result = 0;
	k = 0;
	while (*(s + i) != '\0' && k != 1)
	{
		n = (int) *(s + i);
		if (n == 45)
		{
			sign = sign * (-1);
			i++;
		}
		else if (n >= 48 && n <= 57)
		{
			result = result + (n - 48);
			j = i + 1;
			while ((int) *(s + j) >= 48 && (int) *(s + j) <= 57 && *(s + j) != '\0')
			{
				n = (int) *(s + j);
				result = result * 10 + (n - 48);
				j++;
			}
			result = result * sign;
			k = 1;
		}
		else
		{
			i++;
		}
	}
	return (result);
}
