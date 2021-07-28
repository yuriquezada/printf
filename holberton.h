#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
/**
 * struct print - print type and print function
 * @char_to_compare: print type
 * @f: print function
 */
typedef struct print
{
	char *char_to_compare;
	int (*f)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_percentage(va_list percentage);
int print_d(va_list d);
int print_i(va_list i);
int print_binary(va_list b);

#endif
