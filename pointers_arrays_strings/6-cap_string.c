#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

char *cap_string(char *a)
{

	int i, uppercase = 1;

	for (i = 0; i < strlen(a); i++)
	{

		if (uppercase)
		{

			a[i] = toupper(a[i]);
			uppercase = 0;

		}

		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' || a[i] == ',' || a[i] == ';' || a[i] == '.' || a[i] == '!' || a[i] == '?' || a[i] == '"' || a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
		{

			uppercase = 1;
		}
	}
}