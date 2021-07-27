#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_s - print a string
 * @s: string to print
 *
 * Return: i
 */
int print_s(va_list s)
{
	char *str = va_arg(s, char *);
	int i;

	if (!str)
		str = "(null)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return(i);
}
