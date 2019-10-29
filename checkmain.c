#include "holberton.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/* int n = 2; */
	/* int len; */
	/* int len2; */
	/* unsigned int ui; */
	/* void *addr; */

	/* _printf("Hello-- c: %c s: %s %: %% d: %d o: %o b: %b x: %x X: %X p: %p u: %u S: %S r: %r R: %R --World\n", 35, 0, -54, 54, 54, 11238, 11238, &n, -1, "Holberton\nSchool", "Hello Holberton", "Uryyb Ubyoregba"); */

	/* len = _printf("Let's try to %x printf a simple sentence.\n", 89635); */
	/* len2 = printf("Let's try to %x printf a simple sentence.\n", 89635); */
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
	/* len = _printf("Percent:[%%]\n"); */
	/* len2 = printf("Percent:[%%]\n"); */
	/* _printf("Len:[%d]\n", len); */
	/* printf("Len:[%d]\n", len2); */
	/* _printf("Unknown:[%y]\n"); */
	/* printf("Unknown:[%y]\n"); */

	/* _printf("----------------\nTest for integers\n----------------\n"); */
	/* _printf("Normal: %.20s\n", "Hola Mundo"); */
	/* _printf("Normal: %.5b\n", 4); */
	/* _printf("Normal: %.3o\n", 40); */
	/* _printf("Normal: %.5d\n", -578); */
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

	/* _printf("%    s%   c", 0, 0); */

	int len, len2;
	/* char *str = "When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The \"overall options\" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.\n\nOther options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.\n\nMost of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.\n\nThe gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options may not be grouped: -dv is very different from -d -v.\n\nYou can mix options and other arguments. For the most part, the order you use doesn't matter. Order does matter when you use several options of the same kind; for example, if you specify -L more than once, the directories are searched in the order specified. Also, the placement of the -l option is significant.\n\nMany options have long names starting with -f or with -W---for example, -fmove-loop-invariants, -Wformat and so on. Most of these have both positive and negative forms; the negative form of -ffoo would be -fno-foo. This manual documents only one of these two forms, whichever one is not the default.\nWhen you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The \"overall options\" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.\n\nOther options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.\n\nMost of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.\n\nThe gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options may not be grouped: -dv is very different from -d -v.\n\nYou can mix options and other arguments. For the most part, the order you use doesn't matter. Order does matter when you use several options of the same kind; for example, if you specify -L more than once, the directories are searched in the order specified. Also, the placement of the -l option is significant.\n\nMany options have long names starting with -f or with -W---for example, -fmove-loop-invariants, -Wformat and so on. Most of these have both positive and negative forms; the negative form of -ffoo would be -fno-foo. This manual documents only one of these two forms, whichever one is not the default.\n"; */

	/* len = _printf("Hello%s\n", str); */
	/* len2 = printf("Hello%s\n", str); */
	/* fflush(stdout); */
	/* if (len != len2) */
	/* { */
	/* 	printf("Lengths differ.\n"); */
	/* 	fflush(stdout); */
	/* 	return (1); */
	/* } */
	_printf("Checking hash\n");
	(void) len;
	(void) len2;
	len = _printf("\tLen _: %d\n", _printf("%+ #x", 0));
	len2 = printf("\tLen p: %d\n", printf("%+ #x", 0));
	len = _printf("\tLen _: %d\n", _printf("%#X", 50));
	len2 = printf("\tLen p: %d\n", printf("%#X", 50));
	len = _printf("\tLen _: %d\n", _printf("%#yo", 50));
	len2 = printf("\tLen p: %d\n", printf("%#yo", 50));

	return (0);

}
