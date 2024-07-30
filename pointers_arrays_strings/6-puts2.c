#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void puts2(char *str)
{

int len = 0;
int i = 0;

while (str[len] > '\0')
{
	len++;
}

while (i < len)
{

	_putchar(str[i]);
	i++;
	i++;
}

_putchar('\n');
}
