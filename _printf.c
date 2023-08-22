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
	int index = 0, chars_printed = 0, ret_val = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			index++;
			while (format[index] == ' ')
				index++;
			if (format[index] == '\0')
				return (-1);
			ret_val = select_con_spec(format, index, args);
			if (ret_val == -1)
				return (-1);
			chars_printed += ret_val;
		}
		else
		{
			write(1, &format[index], 1);
			chars_printed++;
		}
	}
	va_end(args);
	/* printf("chars printed: %d\n", chars_printed); */
	return (chars_printed);
}
