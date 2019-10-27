#include "holberton.h"

/**
 * gen_r - Generates a reversed string written to a buffer
 * @pattern: Pattern to follow to print the adress
 * @len_p: Length of the pattern
 * @list: list of arguments of the pattern
 *
 * Generates an reverse string
 * the pattern inserted by parameter.
 * The pattern was already checked.
 * The next argument in list corresponds to the argument to print
 *
 * Return: A pointer to the string
 * NULL if could not allocate the memory for the operation
 */
char *gen_r(const char *pattern, int len_p, va_list list)
{
	char *str, *s;
	int i, l = 0;

	(void) pattern;
	(void) len_p;

	s = va_arg(list, char *);
	if (s == 0)
		s = ")llun(";

	while (s[l])
		l++;

	str = malloc(l + 1);
	if (str == 0)
		return (0);

	for (i = 0; i <= l; i++)
		str[i] = s[i];

	rev_str(str);
	return (str);
}
