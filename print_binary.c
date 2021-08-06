#include <stdarg.h>
#include "holberton.h"

/**
* print_binary - The unsigned int argument is converted to binary
* @b: argument variadic function
*
* Return: stored values
*/

int print_binary(va_list b)
{

	int i, j = 0;
	unsigned int n;
	unsigned int bin[1000];

	n = va_arg(b, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		j++;
	}
	else
	{
		i = 0;
		while (n > 0)
		{
			bin[i] = n % 2;
			n = n / 2;
			i++;
		}
		i = i - 1;
		while (i >= 0)
		{
			_putchar(bin[i] + '0');
			i--;
			j++;
		}
	}
	return (j - 2);
}
