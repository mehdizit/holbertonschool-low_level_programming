#include "holberton.h"

int _sqrt_recursion(int n);
int square_root_wrapper(int guess,  int n);


int square_root_wrapper(int guess, int n)
{

	if (guess * guess == n)
	{
		return(guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (square_root_wrapper( guess + 1, n));
}

	

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (square_root_wrapper(1, n));
}
