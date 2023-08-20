#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct con_specs
{
	char spec;
	int (*func)(va_list);
	/* int (*f_ptr)(va_list, char[], int, int, int, int); */
} con_specs_t;


int con_char(va_list args);
int con_str(va_list args);
int con_perc(va_list args);

int _printf(const char *format, ...);
int our_putchar(char c);



#endif
