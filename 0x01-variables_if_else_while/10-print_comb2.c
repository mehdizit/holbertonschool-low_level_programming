#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m;

	for (n = 48;  n < 58; n++)
		for (m = 48 ; m < 58 ; m++)
			if (n != 48 || m != 48)
			{
				putchar(',');
					putchar(' ');
			}
			{
				putchar(n);
				putchar(m);
			}
	putchar('\n');
return (0);
}
