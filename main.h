#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct con_specs - Struct of conversion specifiers
 * @spec: The specifier
 * @func: The function or conversion associated with
 */

typedef struct con_specs
{
	char spec;
	int (*func)(va_list);
	/* int (*f_ptr)(va_list, char[], int, int, int, int); */
} con_specs_t;

int con_char(va_list args);
int con_str(va_list args);
int con_perc(va_list args);
int con_error(va_list args);
int con_dec(va_list args);
int con_int(va_list args);
int con_rot13(va_list args);
int con_rev(va_list args);

int _printf(const char *format, ...);
int our_putchar(char c);
int select_con_spec(const char *format, int index, va_list args);

#endif
