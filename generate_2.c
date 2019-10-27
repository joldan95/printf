#include "holberton.h"

/**
 * gen_x - Generates an hexadecimal conversion written to a string in lowercase
 * @pattern: Pattern to follow to print the hexadecimal
 * @len_p: Length of the pattern
 * @list: list of arguments of the pattern
 *
 * Generates a hexadecimal written to a string, following
 * the pattern inserted by parameter.
 * The pattern was already checked.
 * The next argument in list corresponds to the argument to print
 *
 * Return: A pointer to the string
 * NULL if could not allocate the memory for the operation
 */
char *gen_x(const char *pattern, int len_p, va_list list)
{
	unsigned long int i = 0, base = 16, n;
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
		if ((n % base) < 10)
			str[i] = (n % base) + '0';
		else
			str[i] = (n % base) + 'W';
		n = n / base;
	}
	str[i] = '\0';
	rev_str(str);
	return (str);
}
/**
 * gen_X - Generates an hexadecimal conversion written to a string in Uppercase
 * @pattern: Pattern to follow to print the hexadecimal
 * @len_p: Length of the pattern
 * @list: list of arguments of the pattern
 *
 * Generates a hexadecimal written to a string, following
 * the pattern inserted by parameter.
 * The pattern was already checked.
 * The next argument in list corresponds to the argument to print
 *
 * Return: A pointer to the string
 * NULL if could not allocate the memory for the operation
 */
char *gen_X(const char *pattern, int len_p, va_list list)
{
	unsigned long int i = 0, base = 16, n;
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
		if ((n % base) < 10)
			str[i] = (n % base) + '0';
		else
			str[i] = (n % base) + '7';
		n = n / base;
	}
	str[i] = '\0';
	rev_str(str);
	return (str);
}
/**
 * gen_p - Generates an hexadecimal conversion of an adress written to a string
 * @pattern: Pattern to follow to print the adress
 * @len_p: Length of the pattern
 * @list: list of arguments of the pattern
 *
 * Generates a hexadecimal written to a string, following
 * the pattern inserted by parameter.
 * The pattern was already checked.
 * The next argument in list corresponds to the argument to print
 *
 * Return: A pointer to the string
 * NULL if could not allocate the memory for the operation
 */
char *gen_p(const char *pattern, int len_p, va_list list)
{
	unsigned long int i = 0, base = 16, n;
	char *str;

	(void) pattern;
	(void) len_p;

	n = (unsigned long int) va_arg(list, void *);

	if (n != 0)
		str = malloc(blen(n, base) + 1 + 2);
	else
		str = malloc(1 + 1 + 2), str[i] = '0', i++;

	if (str == 0)
		return (0);

	for (; n > 0; i++)
	{
		if ((n % base) < 10)
			str[i] = (n % base) + '0';
		else
			str[i] = (n % base) + 'W';
		n = n / base;
	}
	str[i] = 'x', str[i + 1] = '0';
	str[i + 2] = '\0';
	rev_str(str);
	return (str);
}
/**
 * gen_u - Generates an unsigned number conversion written to a string
 * @pattern: Pattern to follow to print the adress
 * @len_p: Length of the pattern
 * @list: list of arguments of the pattern
 *
 * Generates an unsigned int written to a string, following
 * the pattern inserted by parameter.
 * The pattern was already checked.
 * The next argument in list corresponds to the argument to print
 *
 * Return: A pointer to the string
 * NULL if could not allocate the memory for the operation
 */
char *gen_u(const char *pattern, int len_p, va_list list)
{
	int len_int;
	unsigned long int number, base = 10;
	char *str;

	(void) pattern;
	(void) len_p;
	number = va_arg(list, unsigned int);

	len_int = blen(number, base);
	str = malloc(len_int + 1);
	if (str == NULL)
		return (0);

	str[len_int] = '\0';
	print_number_str_u(number, str);
	return (str);
}
