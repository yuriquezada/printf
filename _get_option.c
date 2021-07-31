#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * get_option - Get the function based on the input value
 * @format: string that contains what we will print
 *
 * Return: corresponding pointer to function or NULL
 */
int (*get_option(const char *format))(va_list)
{
	unsigned int i;
	print_f options[] = {
		{"c", print_c},
		{"s", print_s},
		{"b", print_binary},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	for (i = 0; options[i].c != NULL; i++)
		if (*options[i].c == *format)
			break;
	return (options[i].f);
}
