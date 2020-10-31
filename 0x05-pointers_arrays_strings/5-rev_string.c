#include "holberton.h"

/**
*rev_string -reverse string
*
*@s: pointer to string
*
*/
void rev_string(char *s)
{
	int i, j, len;
	char temp;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (j = len - 1; j >= (len / 2); j--)
	{
		temp = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = temp;
	}
}
