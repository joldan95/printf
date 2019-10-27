#include "holberton.h"

/**
 * rev_str - Reverses a string
 * @s: string to reverse
 *
 * Return: Nothing
 */
void rev_str(char *s)
{
	int i = 0, j = 0, l;
	char tmp;

	while (s[i])
		i++;
	l = i / 2, i = i - 1;
	while (i >= l)
	{
		tmp  = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--, j++;
	}
}
/**
 * blen - obtains length of number in base
 *
 * @n: number
 * @base: base of number
 *
 * Return: length of number (+1 if negative)
 */
int blen(unsigned long int n, unsigned long int base)
{
	unsigned long int i, neg = 0;

	if (n < 0)
		n *= -1, neg = 1;
	for (i = 0; n > 0; i++)
		n = n / base;
	return (i + neg);
}
