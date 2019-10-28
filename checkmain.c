#include "holberton.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
	int n = 2;
	_printf("Hello-- c: %c s: %s %: %% d: %d o: %o b: %b x: %x X: %X p: %p u: %u S: %S r: %r R: %R --World\n", 35, 0, -54, 54, 54, 11238, 11238, &n, -1, "Holberton\nSchool", "Hello Holberton", "Uryyb Ubyoregba");

	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%y]\n");
	printf("Unknown:[%y]\n");

	_printf("----------------\nTest for integers\n----------------\n");
	_printf("Normal: %.20s\n", "Hola Mundo");
	_printf("Normal: %.5b\n", 4);
	_printf("Normal: %.3o\n", 40);
	_printf("Normal: %.5d\n", -578);
	/* _printf("Long: %ld\n", 123456789123); */
	/* _printf("Short: %hd\n", 123456789123); */
	/* _printf("----------------\nTest for Octals\n----------------\n"); */
	/* _printf("Normal: %o\n", 123456789123); */
	/* _printf("Long: %lo\n", 123456789123); */
	/* _printf("Short: %ho\n", 123456789123); */
	/* _printf("----------------\nTest for hexa\n----------------\n"); */
	/* _printf("Normal: %x\n", 123456789123); */
	/* _printf("Long: %lx\n", 123456789123); */
	/* _printf("Short: %hx\n", 123456789123); */
	/* _printf("----------------\nTest for hexa\n----------------\n"); */
	/* _printf("Normal: %X\n", 123456789123); */
	/* _printf("Long: %lX\n", 123456789123); */
	/* _printf("Short: %hX\n", 123456789123); */

	return (0);
}
