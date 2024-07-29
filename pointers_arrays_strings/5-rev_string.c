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

while (s[len] != '\0')
{
	len++;
}

while (len >= 0)
{

	len--;
	_putchar(s[len]);
}

_putchar('\n');
}
