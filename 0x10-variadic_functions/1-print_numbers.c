#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nb;
	unsigned i;

	va_start (nb, n);

	for (i =0; i < n ; i++)
	{
		va_arg (nb, const unsigned int);
		printf("%i", va_arg (nb, const unsigned int));
		printf("%s", separator);
	}
	va_end (nb);
	printf ("\n");
}
