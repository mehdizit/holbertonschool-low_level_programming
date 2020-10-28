#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
typedef struct m
{
	char t;
	int (*f)(va_list valist) ;
} print_t;

int _putchar(char c);
int print_c(va_list arg);
int print_dec(va_list arg);
int print_int(va_list arg);
int print_strings(va_list arg);
int _printf(const char *format, ...);
int (*checkType(char ch))(va_list valist);



#endif


























































/**
 * struct print - struct for conversion specifiers
 * @print: struct print
 * @p: print function specified
 
typedef struct print
{
	char *print;
	int (*p)();
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);

int p_char(va_list arg);
int p_str(va_list arg);
int p_dec(va_list arg);
int p_int(va_list arg);

#endif */
