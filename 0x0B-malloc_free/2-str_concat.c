#include <stdlib.h>
/**
*length - length of a string
*@s3: string
*Return: length of string
*/
int length(char *s3)
{
	int i;

	for (i = 0; s3[i] != '\0'; i++)
		;
	return (i);
}

/**
 *str_concat - concatenate two string.
 *@s1: string
 *@s2: string
 *
 *Return: string
 */



char *str_concat(char *s1, char *s2)
{
	int i;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str = malloc(sizeof(char) * (length(s1) + length(s2) + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length(s1); i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i <= length(s2); i++)
	{
		str[i + length(s1)] = s2[i];
	}
	return (str);
}
