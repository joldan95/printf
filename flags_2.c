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
/* Applies width */

	len_buff = app_hash(pattern, len_p, buffer);
	/* Applies numeral */
	/* Applies plus and space */
	/* if (wi && wi > len_buff) */
/* Applies minus and 0 */
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

/**
 * app_hash - Applies the hash flag to the buffer
 * @pattern: Pattern to follow
 * @len_p: Lenght of patter
 * @buffer: Buffer where to made the changes
 *
 * Return: The final length of the buffer
 */
int app_hash(const char* pattern, int len_p, char *buffer)
{
	int i, len_buff = _strlen(buffer), start;
	char cs = pattern[len_p - 1];

	if ((cs == 'o' || cs == 'x' || cs == 'X') && check_flag(pattern, len_p, '#'))
	{
		start = (cs == 'o' ? 1 : 2);
		for (i = len_buff + start; i >= 0; i--)
		{
			if (i == 0)
				buffer[i] = '0';
			else if (i == 1 && cs != 'o')
				buffer[i] = cs;
			else
				buffer[i] = buffer[i - start];
		}
	}
	return (_strlen(buffer));
}

/**
 * check_flag - Checks if a flag exists in a pattern
 * @pattern: Pattern where to check the flag
 * @flag: Flag to be checked
 *
 * Return: 1 if the flag exists
 * 0 otherwise
 */
int check_flag(const char *pattern, int len_p, char flag)
{
	int i;

	for (i = 0; i < len_p; i++)
	{
		if (pattern[i] == flag)
			return (1);
	}
	return (0);
}
