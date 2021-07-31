#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _prinf - print anything
 * @format: string containing the data types
 *
 * Return: length
 */
int _printf(const char *format, ...)
{
	unsigned int i, j;
	int length = 0;
	print_f options[] = {
		{"c", print_c},
		{"s", print_s},
		{"b", print_binary},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	va_list arg;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(arg, format);
	for (i = 0; format[i]; i++)
	{
		if (!format[i])
			return (length);
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar(format[i]);
			i++;
			length++;
			continue;
        	}
		if (format[i] == '%' && format[i + 1] != '%')
		{
			for (j = 0; options[j].c; j++)
			{
				if (format[i + 1] == *(options[j].c))
				{
					length += options[j].f(arg);
					break;
				}
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			length++;
		}
	}
	va_end(arg);
	return (length);
}
