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
	int integer;

	integer = 48;
	while  (integer < 58)
	{
		putchar(integer);
		integer++;
	}
	putchar('\n');

	return (0);
}
