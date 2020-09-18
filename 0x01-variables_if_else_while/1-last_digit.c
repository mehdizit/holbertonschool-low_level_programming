#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = n % 10;
	if (c > 5)
	{
		printf("last digit of %i is %i and is greater than 5\n", n, c);
	}
	else if (c == 0)
	{
		printf("last digit of %i is %i and is 0\n", n, c);
	}
	else
	{
		printf("last digit of %i is %i and is less than 6 and not 0\n", n, c);
	}
return (0);
}
