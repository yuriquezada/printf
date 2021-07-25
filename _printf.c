#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_c - print a char
 * @c: char to print
 *
 * Return: void
 */
int print_c(va_list c)
{
	_putchar(va_arg(c, int));
    return(1);
}

/**
 * _prinf - print anything
 * @format: string containing the data types
 *
 * Return: void
 */
int _printf(const char *format, ...)
{
	unsigned int i, j;
	print_f options[] = {
		{"c", print_c},
		{NULL, NULL}
	};
	va_list type_data;

	va_start(type_data, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (options[j].char_to_compare)
		{
			if (*(options[j].char_to_compare) == format[i])
			{
				options[j].f(type_data);
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(type_data);

    return (0);
}
