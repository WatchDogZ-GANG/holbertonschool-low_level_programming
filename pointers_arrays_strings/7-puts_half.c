#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void puts_half(char *str)
{

int a = 0;
int b = 0;

while (str[a] != '\0')
{

	a++;
}

b = a - 1 / 2;

while (b < a)
{

	_putchar(str[b]);
	b++;
}
}
