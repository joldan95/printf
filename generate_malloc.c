#include "holberton.h"
/**
 * generate_malloc - calls function that creates malloc with written specifier
 *
 * @s: parameter to analize %+3.3d
 * @len_p: length of part analized %+5.4d (l = 6)
 * @list: list of variadic arguments
 *
 * Return: 1 if correct, 0 if incorrect
 */
char *generate_malloc(const char *s, int len_p, va_list list)
{
	int i;
	char *(*f)(const char *, int, va_list);
	char *fx = 0;
	specs_t tspecs[] = {
		{'c', gen_c},
		{'s', gen_s},
		{'d', gen_i},
		{'i', gen_i},
		{'o', gen_o},
		{'b', gen_b},
		{'x', gen_x},
		{'X', gen_X},
		{'p', gen_p},
		{'u', gen_u},
	};
	/* 13 Specifiers */
	for (i = 0; i < 13; i++)
		if (s[len_p - 1] == tspecs[i].s)
		{
			f = tspecs[i].f;
			fx = f(s, len_p, list);
		}
	/* Returns Pointer Malloec with number or string */
	return (fx);
}
