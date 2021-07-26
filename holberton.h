#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

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

#endif
