#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * con_bi - prints a (binary base 2) number
 * @args: the argument to be printed
 * Return: returns error -1
 */

int con_bi(va_list args)
{
	int chars_printed = 0;

	int n = 1;
	int digit = 0;
	long num = va_arg(args, int);


	if (num < 0)
	{
		our_putchar('-');
		chars_printed++;
		num = -num;
	}

	while (num / n > 1)
	{
		n = n * 2;
	}

	while (n > 0)
	{
		digit = num / n;
		our_putchar(digit + '0');
		chars_printed++;
		num = num % n;
		n = n / 2;
	}

	return (chars_printed);
}


