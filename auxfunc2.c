#include "holberton.h"

/**
 * hexS - Makes hexadecimal conversion for non printable characters
 * @n: Number to conver
 *
 * Return: Pointer with conversion
 */
char *hexS(int n)
{
	int i = 0;
	char *r;

	if (n > 255)
		return (0);

	r = malloc (3);
	if (r == 0)
		return (0);

	if (n == 0)
		r[0] = '0', r[1] = '0';

	if (n < 16)
		r[1] = '0';
	for(; n > 0; i++)
	{
		if ((n % 16) < 10)
			r[i] = (n % 16) + '0';
		else
			r[i] = (n % 16) + '7';
		n = n / 16;
	}
	r[2] = '\0';
	rev_str(r);
	return (r);
}
