#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>


int _putchar(char c);
void print_c(va_list arg);
void print_dec(va_list arg);
void print_int(va_list arg);
void print_strings(va_list arg);
int _printf(const char *format, ...);



typedef struct m
{
	char *t;
	void (*f)(va_list);
} print_t;

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
