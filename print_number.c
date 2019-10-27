/**
 * print_number_str - Prints a number to the string inserted
 * @n: Number to print
 * @str: String where to print the number
 *
 * Return: Nothing
 */
void print_number_str(int n, char *str)
{
    int i = 0;
    int s;
    unsigned int d = 1;

	n < 0 ? *str = '-' : 1;
    s = n < 0 ? 1 : 0;
	n *= n < 0 ? -1 : 1;
	while (n / d > 9)
		d *= 10;

	while (d >= 1)
	{
		*(str + i + s) = (n / d + '0');
		n %= d;
		d /= 10;
		i++;
	}
}
