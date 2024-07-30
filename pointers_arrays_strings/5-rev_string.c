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
char a = ' ';
char b;

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
}

_putchar('\n');
}
