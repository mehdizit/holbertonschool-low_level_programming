#include "holberton.h"

/**
 *square_root_wrapper - checks for the square root of c
 *@guess:integer
 *@n: number to find sqrt of
 *
 *Return: sqrt
 */

int square_root_wrapper(int guess, int n)
{

	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (square_root_wrapper(guess + 1, n));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: intege
 *
 * Return: natural square.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (square_root_wrapper(1, n));
}
