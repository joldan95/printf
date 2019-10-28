#include "holberton.h"

/**
 * app_flags - Applies the flags found in a pattern string
 * @pattern: Pattern that defines which flags should apply to the format
 * @len_p: Length of the pattern
 * @buffer: Buffer where to apply the flags
 * @wi: Value for width field
 * @pr: Value for precision field
 *
 * Description: Applies the flags found on a string into a buffer that already
 * has a wroted string in it.
 * The flags differ depending on conversion specifier.
 *
 * Return: Nothing
 */
void app_flags(const char *pattern, int len_p, char *buffer, int wi, int pr)
{
	char l = pattern[len_p - 1];
	int is_str, len_buff = _strlen(buffer);

	is_str = (l == 'r' || l == 'R' || l == 'S' || l == 's') ? 1 : 0;

	(void) len_buff;
	(void) wi;

	if (pr)
		len_buff = app_precision(buffer, pr, is_str);/* Applies precision */
	/* if (wi && wi > len_buff) */
	/* 	; *//* Applies width */

	/* Applies numeral */
	/* Applies plus and space */
	/* if (wi && wi > len_buff) */
	/* 	; *//* Applies minus and 0 */


	/* if (p > 0) */
	/* {} */
}

/**
 * app_precision - Applies the precision length to the buffer
 * @buffer: Buffer where to apply the precision length
 * @pr: Precision value to apply
 * @is_str: Value that determines if should work on a string or number buffer
 *
 * Return: The final length of the buffer
 */
int app_precision(char *buffer, int pr, int is_str)
{
	int i, j, stop, len_buff = _strlen(buffer), val;

	/* If is string, the precision truncates the length of the string*/
	if (is_str)
	{
		if (pr < len_buff)
			buffer[pr] = '\0', val = pr;
		else
			val = len_buff;
	}
	else
	{
		if (pr > len_buff)
		{
			stop = buffer[0] == '-' ? 1 : 0;
			for (i = pr + stop, j = len_buff; i >= stop; i--, j--)
				buffer[i] = j < stop ? '0' : buffer[j];
			val = (pr + stop);
		}
		else
		{
			val = (len_buff);
		}
	}

	return (val);
}
