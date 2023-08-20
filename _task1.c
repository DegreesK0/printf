#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - prints out a string
 * @format: the character to be printed out.
 *
 * Return: the number of characters printed, excluding the null byte
 */


int _printf(const char *format, ...)
{
	int i = 0;
	int chars_printed = 0;
	int test;
	va_list args;

	va_start(args, format);

	/* printf("First character: %c\n", format[0]); */
	/* printf("Second character: %c\n", format[1]); */


	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd')
			{
				test = 6;
				/* printf("%d", test); */
				write(1, &test, 4);
			}
		}
		else
		{
			write(1, &format[i], 1);
			chars_printed++;
		}
	}
	printf("\n");
	va_end(args);

	printf("chars printed: %d\n", chars_printed);

	return (chars_printed);
}
