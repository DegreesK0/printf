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

	/* printf("Unknown:[%r]\n"); */
	/* _printf("Unknown:[%r]\n"); */
	/* printf("zero %\n"); */
	/* _printf("zero %\n"); */
	/* printf("one %%\n"); */
	/* _printf("one %%\n"); */
	/* printf("two %%%\n"); */
	/* _printf("two %%%\n"); */
	/* printf("three %%%%%\n"); */
	/* _printf("three %%%%%\n"); */

	/* /1* _printf("two %%% sign", ch); *1/ */
	/* /1* _printf("number: %d", num); *1/ */
	/* /1* _printf("two %%%", ch); *1/ */

	/* /1* printf("%d\n", printf("Hello")); *1/ */
	/* /1* _printf("%d\n", printf("Hello")); *1/ */



	/* /1* _printf(""); *1/ */
	/* /1* printf(""); *1/ */

/*******************************************************************************************/
/*** Task 0 test case ***/
	/* int len = 0; */
	/* int len2 = 0; */

	/* len = _printf("A %s sentence\n", "simple"); */
	/* len2 = printf("A %s sentence\n", "simple"); */
	/* printf("Len:[%d]\n", len); */
	/* printf("Len1:[%d]\n\n", len2); */

	/* len = _printf("A %c%c%s sentence\n", 's', 'i', "mple"); */
	/* len2 = printf("A %c%c%s sentence\n", 's', 'i', "mple"); */
	/* printf("Len:[%d]\n", len); */
	/* printf("Len1:[%d]\n\n", len2); */

	/* len = _printf("A simple %v entence\n"); */
	/* len2 = printf("A simple %v entence\n"); */
	/* printf("Len:[%d]\n", len); */
	/* printf("Len1:[%d]\n\n", len2); */

	/* len = _printf("Percentage: %%\n"); */
	/* len2 = printf("Percentage: %%\n"); */
	/* printf("Len:[%d]\n", len); */
	/* printf("Len1:[%d]\n\n", len2); */

	/* len = _printf("NULL: %c, %s\n", NULL, NULL); */
	/* len2 = printf("NULL: %c, %s\n", NULL, NULL); */
	/* printf("Len:[%d]\n", len); */
	/* printf("Len1:[%d]\n\n", len2); */

	/* len = _printf("%"); */
	/* len2 = printf("%"); */
	/* printf("Len:[%d]\n", len); */
	/* printf("Len1:[%d]\n\n", len2); */

	/* len = _printf("A simple sentence%"); */
	/* len2 = printf("\nA simple sentence%"); */
	/* printf("\nLen:[%d]\n", len); */
	/* printf("Len1:[%d]\n\n", len2); */




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

