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
