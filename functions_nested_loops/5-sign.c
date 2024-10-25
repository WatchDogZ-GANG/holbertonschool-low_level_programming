#include<stdio.h>
#include"main.h"

/**
 *
 *
 *
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
