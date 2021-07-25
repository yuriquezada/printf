#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int _putchar(char);
int _printf(const char *format, ...);

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

#endif
