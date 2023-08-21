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
		{'c', con_char}, {'s', con_str}, {'%', con_perc}, {' ', con_space},
		{'d', con_space}, {'i', con_space}, {'b', con_space}, {'u', con_space},
		{'o', con_space}, {'x', con_space}, {'X', con_space}, {'S', con_space},
		{'p', con_space}, {'r', con_space}, {'R', con_space},
		{'\0', con_space}};
	int i = 0, j = 0, chars_printed = 0, temp = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{/* printf("<i = %d, format[i] = %c>\n", i, format[i]); */
			temp = i;
			for (j = 0; cons[j].spec != '\0'; j++)
			{ /* if (strcmp(&format[i], cons[j].spec) == 0) */
				if (format[i + 1] == cons[j].spec)
				{
					chars_printed += cons[j].func(args);
					i++;
					/* if (format[i] == '%' && format[i + 1] == '%') */ /*	i++; */
				}
			}
			if (temp == i)
			{
				our_putchar(format[i]);
				chars_printed++;
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
