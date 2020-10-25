#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - print strings passed to the argument
 *@separator: pointer to character
 *@n: unsigned integer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ch;
	unsigned int i;

	va_start(ch, n);
	for (i = 0; i < n; i++)
	{
		if ((va_arg(ch, char *)) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(ch, char *));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ch);
}
