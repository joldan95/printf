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
