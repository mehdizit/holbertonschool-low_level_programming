#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - function to print number passed as arguments
 *@separator: pointer to char
 *@n: integger
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nb;
	unsigned int i;

	va_start(nb, n);

	for (i = 0; i < n ; i++)
	{
		if (n == 0)
			return;
		va_arg(nb, int);
		printf("%d", va_arg(nb, int));
		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	va_end(nb);
	printf("\n");
}
