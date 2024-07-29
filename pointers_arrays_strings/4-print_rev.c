#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void print_rev(char *s)
{

int len = 0;
int i = len - 1;

while (s[len] > '\0')
{
	len++;
}

while (i >= 0)
{

	i--;
	_putchar(s[i]);
}

_putchar('\n');
}
