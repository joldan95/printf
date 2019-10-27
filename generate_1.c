#include "holberton.h"
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
	int i;
	int len_int;
	int number;
	char *str;

	number = va_arg(list, int);
	len_int = blen(number, 10);
	str = malloc(len_int + 1);
	if (str == NULL)
		return (0);

	str[len_int] = '\0';
	print_number_str(number, str);
	return (str);

}
/**
 * gen_o - Generates an octal conversion written to a string
 * @pattern: Pattern to follow to print the integer
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
	int i = 0, base = 8, n;
	char *str;

	n = va_arg(list, int);
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
 * gen_b - Generates an octal conversion written to a string
 * @pattern: Pattern to follow to print the integer
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
char *gen_b(const char *pattern, int len_p, va_list list)
{
	int i = 0, base = 2;
	char *str;

	number = va_arg(list, int);
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
