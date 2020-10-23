#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ch;
	unsigned int i;

	va_start (ch, n);
	for (i = 0; i < n; i++)
	{
		printf ("%s", va_arg (ch, char *));
		printf ("%s", separator);
	}
	va_end (ch);
	printf("\n");
}
