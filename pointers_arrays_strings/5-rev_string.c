#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void rev_string(char *s)
{

int len = 0;
int i;
int j = 0;
char a = ' ';
char str[len];

a--;

while (s[len] > '\0')
{
	len++;
}

i = len;

while (i != 0)
{

	i--;
	a = (s[i]);
	j++;
	str[j] = a;
}

s = str;
_putchar('\n');
}
