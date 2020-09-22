#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 *_putchar() - print caracter.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	
	while (i <= 10)
	{
		char c = 'a';
		
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		
		}
		_putchar('\n');
		i++;
	}
	
}
