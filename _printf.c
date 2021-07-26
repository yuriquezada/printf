#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

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
		if (format[i] == '%')
		{
			while (options[j].char_to_compare)
			{
				if (format[i + 1] == *(options[j].char_to_compare))
				{
					options[j].f(type_data);
					break;
				}
				j++;
			}
			i+=2;
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	_putchar('\n');
	va_end(type_data);
    return (0);
}
