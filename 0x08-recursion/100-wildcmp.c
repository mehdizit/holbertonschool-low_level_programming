/*
 * 100-wildcmp.c
 * Auth: Mehdi Zitouni
 */


#include "holberton.h"

/**
 * _movewild - move index to jump wild character.
 *
 *@s2: string
 *@star: char
 *
 *Return: zero.
 */
int _movewild(char *s2, char star)
{

	star = '*';
	if (*s2)
	{
		if (*s2 == star)
		{
			return (_movewild(s2 + 1, star));
		}
	}
	return (0);
}

/**
 *wildcmp - function to compare two st wildcmpring s1 and s2.
 *@s1: string to compare with s2.
 *@s2: string to compare with s1.
 *
 *Return: zero.
 */
int wildcmp(char *s1, char *s2)
{
	char star = '*';

	if (*s1 && *s2)
	{
		if (*(s1 + 1) == *(s2 + 1))
		{
			return (1);
		}
		else if (*(s2 + 1) == star)
		{
			return (_movewild(s2 + 1, star));
		}

	}
	return (0);
}
