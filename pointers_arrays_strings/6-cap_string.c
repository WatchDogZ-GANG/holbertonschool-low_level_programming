#include <stdio.h>
#include <string.h>
#include "main.h"

char *cap_string(char *a)
{

	int i, b = strlen(a);
	int uppercase = 1;

	for (i = 0; i < b; i++)
	{

		if (uppercase)
		{

			while (a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] = a[i] - 32;
			}
			uppercase = 0;

		}

		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' || a[i] == ',' || a[i] == ';' || a[i] == '.' || a[i] == '!' || a[i] == '?' || a[i] == '"' || a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
		{

			uppercase = 1;
		}
	}

	return (a);
}