#include<stdio.h>
/**
*main - factor
*
*Return: Always 0.
*/
int main(void)
{
	unsigned long n, i, div;

	n = 612852475143;
	i = 2;
	div = 2;
	while (n != 1)
	{
		while (n % i == 0)
		{
			n = n / i;
			if (i > div)
			{
				div = i;
			}
		}
		i++;
	}
	i--;
	printf("%ld\n", i);
	return (0);
}
