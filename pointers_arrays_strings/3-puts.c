#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str)
	{
	    _putchar(*str);
	    str++;
	}
	_putchar('\n');
}
