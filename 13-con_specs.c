#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * con_rev - prints a string in reverse
 * @args: the argument to be printed
 *
 * Return: returns the number of characters printed
 */

int con_rev(va_list args)
{
	int chars_printed = 0;

	int len = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (str[len])
		len++;

	for (len = len - 1; len >= 0; len--)
	{
		our_putchar(str[len]);
		chars_printed++;
	}

	return (chars_printed);
}
