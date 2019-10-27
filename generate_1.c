#include "holberton.h"
/**
 * gen_c - Generates a character written to a string
 * @pattern: Pattern to follow to print the character
 * @len_p: Length of the pattern
 * @list: list of arguments of the pattern
 *
 * Generates a character to a string, following
 * the pattern inserted by parameter.
 * The pattern was already checked.
 * The next argument in list corresponds to the argument to print
 *
 * Return: A pointer to the string
 * NULL if could not allocate the memory for the operation
 */
char *gen_c(const char *pattern, int len_p, va_list list)
{
	char *str;
	char c;

	(void) pattern;
	(void) len_p;

	c = va_arg(list, int);
	str = malloc(sizeof(char) * 2);

	if (str == 0)
		return (0);

	str[0] = c;
	str[1] = '\0';
	return (str);
}
/**
 * gen_s - Generates a string written to a malloc buffer
 * @pattern: Pattern to follow to print the string
 * @len_p: Length of the pattern
 * @list: list of arguments of the pattern
 *
 * Generates a character to a string, following
 * the pattern inserted by parameter.
 * The pattern was already checked.
 * The next argument in list corresponds to the argument to print
 *
 * Return: A pointer to the string
 * NULL if could not allocate the memory for the operation
 */
char *gen_s(const char *pattern, int len_p, va_list list)
{
	char *str, *s;
	int i, l = 0;

	(void) pattern;
	(void) len_p;

	s = va_arg(list, char *);
	if (s == 0)
		s = "(null)";

	while (s[l])
		l++;

	str = malloc(l);
	if (str == 0)
		return (0);

	for (i = 0; i <= l; i++)
		str[i] = s[i];
	return (str);
}
/**
 * gen_i - Generates an integer written to a string
 * @pattern: Pattern to follow to print the integer
 * @len_p: Length of the pattern
 * @list: list of arguments of the pattern
 *
 * Generates an integer wrote to a string, following
 * the pattern inserted by parameter.
 * The pattern was already checked.
 * The next argument in list corresponds to the argument to print
 *
 * Return: A pointer to the string
 * NULL if could not allocate the memory for the operation
 */
char *gen_i(const char *pattern, int len_p, va_list list)
{
	int len_int;
	long int number, base = 10;
	char *str;

	(void) pattern;
	(void) len_p;
	number = va_arg(list, int);
	len_int = blen10(number, base);
	str = malloc(len_int + 1);
	if (str == NULL)
		return (0);

	str[len_int] = '\0';
	print_number_str(number, str);
	return (str);

}
/**
 * gen_o - Generates an octal conversion written to a string
 * @pattern: Pattern to follow to print the octal
 * @len_p: Length of the pattern
 * @list: list of arguments of the pattern
 *
 * Generates an octal written to a string, following
 * the pattern inserted by parameter.
 * The pattern was already checked.
 * The next argument in list corresponds to the argument to print
 *
 * Return: A pointer to the string
 * NULL if could not allocate the memory for the operation
 */
char *gen_o(const char *pattern, int len_p, va_list list)
{
	unsigned long int i = 0, base = 8, n;
	char *str;

	(void) pattern;
	(void) len_p;
	n = va_arg(list, unsigned int);
	if (n != 0)
		str = malloc(blen(n, base) + 1);
	else
		str = malloc(1 + 1), str[i] = '0', i++;

	if (str == 0)
		return (0);

	for (; n > 0; i++)
	{
		str[i] = (n % base) + '0';
		n = n / base;
	}
	str[i] = '\0';
	rev_str(str);
	return (str);
}
/**
 * gen_b - Generates an binary conversion written to a string
 * @pattern: Pattern to follow to print the binary
 * @len_p: Length of the pattern
 * @list: list of arguments of the pattern
 *
 * Generates an binary written to a string, following
 * the pattern inserted by parameter.
 * The pattern was already checked.
 * The next argument in list corresponds to the argument to print
 *
 * Return: A pointer to the string
 * NULL if could not allocate the memory for the operation
 */
char *gen_b(const char *pattern, int len_p, va_list list)
{
	unsigned long int i = 0, base = 2, n;
	char *str;

	(void) pattern;
	(void) len_p;
	n = va_arg(list, unsigned int);
	if (n != 0)
		str = malloc(blen(n, base) + 1);
	else
		str = malloc(1 + 1), str[i] = '0', i++;

	if (str == 0)
		return (0);

	for (; n > 0; i++)
	{
		str[i] = (n % base) + '0';
		n = n / base;
	}
	str[i] = '\0';
	rev_str(str);

	return (str);
}
