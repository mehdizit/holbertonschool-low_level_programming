#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, sum;

	va_start (add, n); /* to initialize the list of argument */
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg (add, int);/* for next argument value */
	}
	va_end (add);/* to clean up */
	return (sum);
}
