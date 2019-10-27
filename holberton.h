#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
/**
 * struct Checkstr - Struct to check format
 *
 * @flag: character associated to flags
 * @flagnot: Flags that are not allowed per specifier
 */
typedef struct Checkstr
{
	char flag;
	char *flagnot;
} checkstr;

/**
 * struct Specs_t - struct to call specifier functions
 *
 * @s: character representing specifier
 * @f: The function associated
 */
typedef struct Specs_t
{
	char s;
	char *(*f)(char *, int, va_list);
} specs_t;

int check_format(char *formspec, int j);
char *generate_malloc(char *s, int len_p, va_list list);
char *gen_c(char *, int, va_list);
char *gen_s(char *, int, va_list);
char *gen_S(char *, int, va_list);
char *gen_d(char *, int, va_list);
char *gen_i(char *, int, va_list);
char *gen_o(char *, int, va_list);
char *gen_u(char *, int, va_list);
char *gen_x(char *, int, va_list);
char *gen_X(char *, int, va_list);
char *gen_b(char *, int, va_list);
char *gen_u(char *, int, va_list);
char *gen_p(char *, int, va_list);
char *gen_r(char *, int, va_list);
char *gen_R(char *, int, va_list);
#endif
