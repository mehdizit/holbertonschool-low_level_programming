#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(int c,...)
{
	va_list str;
	int i;

	va_start (str, c);
	for (i = 0; i < c; i++)
	{
		printf ("%d", va_arg (str, char));
	}
	va_end (str);
}

void print_integer(int nb,...)
{
	va_list str;
	int i;
	va_start (str, nb);
	for (i = 0; i < nb; i++)
	{
		printf ("%i", va_arg(str, int));
	}
	va_end (str);
}

void print_float(int nbf,...)
{
	va_list str;
	int i;
	va_start (str, nbf);
	for (i = 0; i < nbf; i++)
	{
		printf ("%f", va_arg(str, double));
	}
	va_end (str);
}

void print_string(int string,...)
{
	va_list str;
	int i;
	va_start (str, string);
	for (i = 0; i < string; i++)
	{
		printf ("%s", va_arg(str, char *));
	}
	va_end (str);
}
	
	
void print_all(const char * const format, ...)
{
	int i, j;
	print_t p[] = {
		{"c", print_char},
		{"nb", print_integer},
		{"nbf", print_float},
		{"string", print_string},
		{NULL, NULL}
	};
	va_list addformat;
	char *separator = "";

	va_start (addformat, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (*(p[j].t) != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(aadformat);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end (addformat);
	printf ("\n");
}
	
