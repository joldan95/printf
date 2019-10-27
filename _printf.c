#include "holberton.h"

/**
 * _printf - Simulates the printf function
 * @format: Format to print to the console
 *
 * Description: Function that simulate the printf function
 * for the following conversion specifiers:
 *    - c:    Chracter
 *    - s/S:  Strings. 's' prints the same string.
 *            'S' prints the string, changing the non-printable characters
 *            to '\x??' format, where '??' corresponds to a hexadecimal number
 *    - d/i:  Integers
 *    - o:    Octal numbers
 *    - x/X:  Hexadecimal numbers
 *    - b:    Binary numbers
 *    - u:    Unsigned numbers
 *    - %:    '%' char
 *    - r:    Reverse string
 *    - R:    Root13 of the string
 * The function considerate the next arguments, checking the usability for the
 * conversion specifier used:
 * (+)      Adds a '+' sign to positive integers
 * ( )      Adds a ' ' to the start of the number
 * (#)      Adds '0' or '0x' to the start of the octal or hexadecimal number
 * (l)      Converts the number to a 'long' type
 * (h)      Converts the number to a 'short' type
 * (width)  Add spaces(?) to the printing format
 * (preci)  Print the number with the corresponding precision
 * (0)      Add '0' to the spaces created with 'width'
 * (-)      Justify the string to the left
 *
 * Return: Number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list list;
	char *buffer, *str;
	int  i = 0, i_buffer = 0, j_spec, lenstr;

	buffer = malloc(1024);
	if (buffer == NULL)
		return (0);
	va_start(list, format);
	while (format && format[i])
	{
		j_spec = 0;
		if (format[i] == '%')
		{
			/* Check whether exists a conversion specifier or not */
			/* And check_format function */
			if (check_specs(format + i, &j_spec) && check_format(format + i, j_spec))
			{
				/* Generate_malloc function */
				str = generate_malloc(format + i, j_spec, list), lenstr = _strlen(str);
				/* Copies the str to the buffer */
				_memcpy(buffer + i_buffer, str, lenstr);
			}
			else
			{
				/* if --> Copies '%' to the buffer */
				/* else --> Copies the string from format[i] to format[i + j_spec] */
				if (format[i + 1] == '%')
					_memcpy(buffer + i_buffer, format + i, 1), j_spec = 2, lenstr = 1;
				else
					_memcpy(buffer + i_buffer, format + i, j_spec), lenstr = j_spec;
			}
			i += j_spec, i_buffer += lenstr;
			continue;
		}
		_memcpy(buffer + i_buffer, format + i, 1), i++, i_buffer++;
	}
	va_end(list);
	i_buffer = write(1, buffer, i_buffer);
	free(buffer);
	return (i_buffer);
}

/**
 * check_specs - Check if a string has a conversion specifier
 * @s: String where to check the conversion specifier
 * @p: Pointer to the variable where the length to consider is saved
 * Return: 0 if does not find a conversion specifier
 * 1 if find a conversition specifier
 */
int check_specs(const char *s, int *p)
{
	char *specs = "csSdioxXburRp";
	int i = 0, j;

	while (s[i] && (i == 0 || s[i] != '%'))
	{
		j = 0;
		while (specs[j])
		{
			if (s[i] == specs[j])
			{
				*p = i + 1;
				return (1);
			}
			j++;
		}
		i++;
	}
	*p = i;
	return (0);
}


/**
 * _memcpy - copies the memory from src to dest
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: bytes to use from src
 *
 * Return: Nothing(?)
 */
void _memcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	/* return (dest); */
}

/**
 * _strlen - return the length of a string
 * @s: Pointer to an string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}
