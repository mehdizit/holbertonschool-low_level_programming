#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
*sum_them_all - function to sum all argument
*@n: integer
*Return: int.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i;
	double sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(add, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(add, int);
	}
	va_end(add);
	return (sum);
}
