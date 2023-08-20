#include "main.h"
#include <stdarg.h>
#include <stdio.h>


int con_char(va_list args)
{
	int chars_printed = 0;

	our_putchar(va_arg(args, int));
	chars_printed++;

	return (chars_printed);
}


int con_str(va_list args)
{
	int chars_printed = 0;
	int i = 0;
	char *str = va_arg(args, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		our_putchar(str[i]);
		chars_printed++;
	}

	return (chars_printed);
}


int con_perc(__attribute__((unused)) va_list args)
{
	int chars_printed = 0;

	our_putchar('e');
	/* our_putchar(va_arg(args, int)); */
	our_putchar('%');
	chars_printed++;

	return (chars_printed);
}
