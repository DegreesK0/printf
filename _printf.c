#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * _printf - prints out a string
 * @format: the character to be printed out.
 * Return: the number of characters printed, excluding the null byte
 */

int _printf(const char *format, ...)
{
	con_specs_t cons[] = {
		{'c', con_char},
		{'s', con_str},
		{'%', con_perc},
		{' ', con_space},
		{'\0', con_space}};

	int i = 0, j = 0, chars_printed = 0, ret_val = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{ /* printf("<i = %d, format[i] = %c>\n", i, format[i]); */
			i++;
			for (j = 0; cons[j].spec != '\0'; j++)
			{ /* if (strcmp(&format[i], cons[j].spec) == 0) */
				if (format[i] == cons[j].spec)
				{
					ret_val += cons[j].func(args);
					if (ret_val == -1)
						return (-1);
					chars_printed += ret_val;
					/* if (format[i] == '%' && format[i + 1] == '%') */ /*	i++; */
				}
			}
		}
		else
		{
			write(1, &format[i], 1);
			chars_printed++;
		}
	}
	va_end(args);
	/* printf("\n"); */ /* printf("chars printed: %d\n", chars_printed); */
	return (chars_printed);
}
