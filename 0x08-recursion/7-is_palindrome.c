#include "holberton.h"
/**
 * _strlen - find lenght of string s.
 *
 *@s: string to find lenght.
 *
 *Return: lenght of string s.
 *
 */
int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len = len + _strlen(s + len);
	}

	return (len);
}
/**
 *_check - this function check if s is palindromic.
 *
 *@s: string
 *
 *@i: index of string.
 *
 *@len: lenght of string checked.
 *
 *Return: Always 0.
 */

int _check(char *s, int i, int len)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
	{
		return (1);
		return (_check(s, len, i + 1));
	}
	return (0);
}

/**
 *is_palindrome - check for s is palindrom?
 *
 *@s: string to check.
 *
 *Return: value of return function _check.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s);

	return (_check(s, i, len));
}

