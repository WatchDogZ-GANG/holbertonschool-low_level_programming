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
int i;

while (str[len] > '\0')
{
	len++;
}

for (i = 0; i >= len; i++)
{

	i++;
	_putchar(str[i]);
}

_putchar('\n');
}
