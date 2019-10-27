#include "holberton.h"
/**
 * blen - obtains length of number in base
 *
 * @n: number
 * @base: base of number
 *
 * Return: length of number (+1 if negative)
 */
int blen(int n, int base)
{
	int i, neg = 0;
	if (n < 0)
		n *= -1, neg = 1;
	for(i = 0; n > 0; i++)
		n = n / base;
	return (i + neg);
}
