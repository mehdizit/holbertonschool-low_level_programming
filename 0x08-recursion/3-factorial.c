#include "holberton.h"
/**
 *factorial - a function that count factorial of integger n.
 *
 *@n : integer to factorial
 *
 *Return: return fact n.
 *
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);

	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));

}
