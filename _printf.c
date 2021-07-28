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
	va_start(arg, format);
	i = 0;
	while (format[i])
	{
		if (!format[i])
			return (length);
		if (format[i] == '%' && format[i + 1] == '%')
		{
			length++;
		}
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			while (options[j].c)
			{
				if (format[i + 1] == *(options[j].c))
				{
					length += options[j].f(arg);
					break;
				}
				j++;
			}
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			i++;
			length++;
		}
	}
	_putchar('\n');
	va_end(arg);
	return (length);
}
