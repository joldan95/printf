#include <stdio.h>
#include <string.h>
#include "holberton.h"

int main(void)
{
	char *formspec = "%060.*hd";
	int j = strlen(formspec);

	int check;

	check = check_format(formspec, j);

	printf("Check %d\n", check);
}
