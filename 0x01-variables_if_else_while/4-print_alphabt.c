#include <stdio.h>

/**
 * main -  Prints all the alphabets in lowercase then in upercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	
	c = 'a';

	while (c < 'z')
	{
		if (c == 'e') && (c == 'q')
		{
			c++;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
	
}
