#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i % 10 + '0');
	}
	for (c = 'A'; c <= 'F'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
