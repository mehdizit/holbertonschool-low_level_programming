#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list valist;
	int i;

	

	va_start(valist, format);
	if (format == NULL)
		return (0);

	for (i = 0; format[i]; i++)
		if ((format[i] == '%') && (format[i + 1] == '\0'))
			return (0);
	for(i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
			_putchar('%');
		else if (format [i] == '%' && format[i + 1] != '%')
		{
			int j;
			print_t array[] = {
				{"c", print_c},
				{"d", print_dec},
				{"i", print_int},
				{"s", print_strings},
				{NULL, NULL}
			};
			for ( j = 0; array[j].t != NULL; j++)
			{
				if (format[i + 1] == array[j].array[0])
				{
					array[j].f(valist);
				}
			}
		}
	}
	va_end(valist);
	_putchar('\n');
	return (0);
}
			


                                  /*on teste les cas d, i, s, c...*/
		

		
 
