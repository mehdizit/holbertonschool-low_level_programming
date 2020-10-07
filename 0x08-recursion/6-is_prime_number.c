#include "holberton.h"
/**
 * check_prime - Checks if a number is divisible.
 * @n1: The number to be checked.
 * @n2: The divisor.
 *
 * Return: prime number
 *
 */
int check_prime(int n1, int n2)
{
	if (n1 % n2 == 0)
	{
		return (0);
	}
	else if (n2 == n1 / 2)
	{
		return (1);
	}
	return (check_prime(n1, n2 + 1));
}
/**
 * is_prime_number - Checks if a number is prime.
 * @n: number to be checked.
 *
 * Return:prime number or not.
 *
 */


int is_prime_number(int n)
{
	int n2 = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, n2));
}
