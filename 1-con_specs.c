#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * con_int - prints a integer (base 10) number
 * @args: the argument to be printed
 *
 * Return: returns error -1
 */

int con_int(va_list args)
{
	int chars_printed = 0;

	int n = 1;
	int digit = 0;
	int num = va_arg(args, int);


	if (num < 0)
	{
		our_putchar('-');
		num = -num;
	}

	while (num / n > 9)
	{
		n = n * 10;
	}

	while (n > 0)
	{
		digit = num / n;
		our_putchar(digit + '0');
		chars_printed++;
		num = num % n;
		n = n / 10;
	}

	return (chars_printed);
}


