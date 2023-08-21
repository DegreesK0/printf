#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';
	char *name = "kelvin/cosby";

	printf(NULL);
	_printf(NULL);
	printf("%s", NULL);
	_printf("%s", NULL);
	printf("% ");
	_printf("% ");

	printf("xyz\n");
	_printf("xyz\n");

	printf("Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", 'H');
	printf("hello %c\n", ch);
	_printf("hello %c\n", ch);

	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", "I am a string !");
	printf("hello %s\n", name);
	_printf("hello %s\n", name);
	printf("hello %shi\n", name);
	_printf("hello %shi\n", name);

	printf("Unknown:[%r]\n");
	_printf("Unknown:[%r]\n");
	printf("zero %\n");
	_printf("zero %\n");
	printf("one %%\n");
	_printf("one %%\n");
	printf("two %%%\n");
	_printf("two %%%\n");
	printf("three %%%%%\n");
	_printf("three %%%%%\n");

	/* _printf("two %%% sign", ch); */
	/* _printf("number: %d", num); */
	/* _printf("two %%%", ch); */

	/* printf("%d\n", printf("Hello")); */
	/* _printf("%d\n", printf("Hello")); */



	/* _printf(""); */
	/* printf(""); */



/********************************************************************************************/
	/* int len; */
	/* int len2; */
	/* unsigned int ui; */
	/* void *addr; */

	/* len = _printf("Let's try to printf a simple sentence.\n"); */
	/* len2 = printf("Let's try to printf a simple sentence.\n"); */
	/* ui = (unsigned int)INT_MAX + 1024; */
	/* addr = (void *)0x7ffe637541f0; */
	/* _printf("Length:[%d, %i]\n", len, len); */
	/* printf("Length:[%d, %i]\n", len2, len2); */
	/* _printf("Negative:[%d]\n", -762534); */
	/* printf("Negative:[%d]\n", -762534); */
	/* _printf("Unsigned:[%u]\n", ui); */
	/* printf("Unsigned:[%u]\n", ui); */
	/* _printf("Unsigned octal:[%o]\n", ui); */
	/* printf("Unsigned octal:[%o]\n", ui); */
	/* _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui); */
	/* printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui); */
	/* _printf("Character:[%c]\n", 'H'); */
	/* printf("Character:[%c]\n", 'H'); */
	/* _printf("String:[%s]\n", "I am a string !"); */
	/* printf("String:[%s]\n", "I am a string !"); */
	/* _printf("Address:[%p]\n", addr); */
	/* printf("Address:[%p]\n", addr); */
	/*/1*len = *1/ _printf("Percent:[%%]\n"); */
	/*/1*len2 = *1/ printf("Percent:[%%]\n"); */
	/* _printf("Len:[%d]\n", len); */
	/* printf("Len:[%d]\n", len2); */
	/* _printf("Unknown:[%r]\n"); */
	/* printf("Unknown:[%r]\n"); */
	return (0);
}
