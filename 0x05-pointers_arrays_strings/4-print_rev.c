#include "holberton.h"

void print_rev(char *s)
{
	
	int i;
	char v;

	for (i = 0; (*(s + i) != '\0'); i++)
	{

            	v = *(s + i);

		*(s + i) = *(s + i + 1);
			
                *(s + i + 1) = v;
			
		_putchar(*(s + i));

		
	}
	_putchar('\n');
}
