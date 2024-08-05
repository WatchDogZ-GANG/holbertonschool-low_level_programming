#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void rev_string(char *s)
{

	int len = 0;
	int i, j = 0;
	char a;
	char *v;

	while (s[len] != '\0')
	{

		len++;
	}

	v = (char *)malloc((len + 1) * sizeof(char));

	i = len;

	while (i != 0)
	{

		i--;
		a = s[i];
		v[j] = a;
		j++;
	}

	v[j] = '\0';

	for (i = 0; i <= len; i++)
	{

		s[i] = v[i];
	}

	free(v);
}
