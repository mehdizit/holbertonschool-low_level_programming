#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int (*checkType(char ch))(va_list valist)
{
		int j;
		print_t m[] = {
			{'c', print_c},
			{'d', print_dec},
			{'s', print_strings},
			{'i', print_dec},
			{'\0', NULL}
		};
			
			
			for ( j = 0; m[j].t; j++)
			{
				if (ch == m[j].t)
					return (m[j].f);
					
			}

}
