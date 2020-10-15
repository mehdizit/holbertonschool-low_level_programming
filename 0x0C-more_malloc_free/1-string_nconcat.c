#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - concatenate two string s1 and s2
 *@s1: string
 *@s2: string
 *@n :number of byte of s2 to concatenate
 *Return: pointer to space memory with string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, len1, len2;
	char *strc;

	len1 = len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{
		len1++;

	}
	for (j = 0; s2[j]; j++)
	{
		len2++;
	}
	if (!(n >= len2))
	{
		len2 = n;
		strc = malloc(sizeof(char) * (len1 + len2 + 1));
		if (strc == NULL)
		{
			return (NULL);
		}
		for (k = 0; k < len1; k++)
		{
			strc[k] = s1[k];
		}
		for (k = 0; k < len2; k++)
		{
			strc[k + len1] = s2[k];
		}
		strc[len1 + len2] = '\0';
	}
	return (strc);
}
