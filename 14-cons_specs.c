#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * con_rot13 - prints a string after
 * @args: the argument to be printed
 *
 * Return: returns the number of characters printed
 */

int con_rot13(va_list args)
{
    int chars_printed = 0;
    int i = 0;
    int j = 0;
    char *str = va_arg(args, char *);

    char *src = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *code = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    if (str == NULL)
        str = "(null)";

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; src[j] != '\0'; j++)
        {
            if (str[i] == src[j])
            {
                our_putchar(code[j]);
                chars_printed++;
                break;
            }
        }
    }

    return (chars_printed);
}
