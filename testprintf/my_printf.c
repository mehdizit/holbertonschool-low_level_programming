#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list valist;
	int i;
	int (*result)(va_list valist);
	

	va_start(valist, format);
	if (format == NULL)
		return (0);

	for(i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
		
			result = checkType(format[i + 1]);
			result(valist);
		}
	}
	va_end(valist);
	_putchar('\n');
	return (0);
}
			


                                  /*on teste les cas d, i, s, c...*/
		

		
 
