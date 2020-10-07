#include "holberton.h"


square_root_wrapper(int min,  int max)
{
	int guess, guess_squard, n;
	if (max < min)
	{
		return(-1);
	}
	guess = (min + max )/2;
	guess_squard = guess * guess;
	if (guess_squard == n)
	{
		return (guess);
	}
	else if (guess_squard < n)
	{
		square_root_wrapper(n, guess + 1, max);
	}
	else
	{
		square_root_wrapper(n, min, guess - 1);
	}
	
}
	

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (square_root_wrapper(n, min, guess - 1));
}
