
#include<stdio.h>
 
/**
*main-enter point_check for largestprime factor of n.
*@i: integer
*@div: integer
*@n: unsigned long
*Return: Always 0.
*/
int main(void)
{
	unsigned long n;
	n = 612852475143;

	int i =2 ,div = 2;

	while(n != 1)
	{
		while(n % i == 0)
		{
			n = n / i;
			printf("%d * ",i);
			if(i > div)
			{
			        div = i;
			}
		}
		i++;
	}
	i--;
	printf("the largest prime factor is : %d\n", i);
	return (0);
}
