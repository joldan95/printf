#include <stdlib.h>
#include <stdarg.h>

/**
 * get_integer - Generates an integer wrote to a string
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
char *get_integer(char *pattern, int len_p, va_list list)
{
    int i;
    int len_int;
    int number;
    char *str;
	number = va_arg(list, int);
    len_int = blen(number, 10);
    str = malloc(len_int + 1);
    if (str == NULL)
        return NULL;

    str[len_int] = '\0';
    p_number(number, str);
    return (str);

}
