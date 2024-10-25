#include <stdio.h>
#include "main.h"

/**
 * print_sign - Print +, -, 0 for pos, neg, or 0
 *
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
	int a = n;

	if (a > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (a < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
