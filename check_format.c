/**
 * whichflag - checks for flag type of a char
 *
 * @formspec: character
 *
 * Return: 1 = flag, 2 = width, 3 = precision, 4 = length
 */
int whichflag(char formspec)
{
	char *flags = " 0+-#";
	char *width = "123456789";
	char *precision = ".";
	char *leng = "lh";
	int i, flagnumber = 0;

	for (i = 0; flags[i] != 0; i++)
		if (formspec == flags[i])
			return (1);

	for (i = 0; width[i] != 0; i++)
		if (formspec == width[i])
			return (2);

	if (formspec == precision[0])
		return (3);

	for (i = 0; leng[i] != 0; i++)
		if (formspec == leng[i])
			return (4);
	/* 1 = flag, 2 = width, 3 = precision, 4 = length */
	return (flagnumber);
}
/**
 * check_format - checks if a flag format in correct
 *
 * @formspec: flags %+50d format
 * @j: length of format
 *
 * Return: 1 if correct, 0 if incorrect
 */
int check_format(char *formspec, int j)
{
	int h, k, z, check, flagtmp1, flagtmp2, zeropass = 0;
	checkstr flagcheck[] = {
		{'c', " 0+#lh."},
		{'s', " 0+#lh"}, {'S', " 0+#lh"},
		{'d', "#"}, {'i', "#"},
		{'u', " +#"},
		{'b', " +#lh"},
		{'o', " +"}, {'x', " +"}, {'X', " +"},
		{'p', " 0+#lh."},
		{'r', " 0+#lh"}, {'R', " 0+#lh"}
	};

	/* Check Specifier and if flag cannot go with it*/
	for (h = 0; h < 13; h++)
		if (formspec[j - 1] == flagcheck[h].flag)
			break;
	for (k = 0; formspec[k] != 0; k++)
	{
		for (z = 0; flagcheck[h].flagnot[z] != 0; z++)
		{
			if (whichflag(formspec[k]) == 2 || whichflag(formspec[k]) == 3)
				zeropass = 1;
			if (formspec[k] == flagcheck[h].flagnot[z] && zeropass == 0)
				return (0);
		}
	}
	/* Check if order is right */
	for (h = 0; h < j - 2; h++)
	{
		flagtmp1 = whichflag(formspec[h]), flagtmp2 = whichflag(formspec[h + 1]);
		if (flagtmp1 == 2 && (flagtmp2 == 1 && formspec[h + 1] != '0'))
			return (0);
		if (flagtmp1 == 3 && (flagtmp2 == 1 && formspec[h + 1] != '0'))
			return (0);
		if (flagtmp1 == 4 && flagtmp2 >= 0)
			return (0);
	}
	return (1);
}
