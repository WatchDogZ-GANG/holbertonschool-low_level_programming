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
		return (1);
		_putchar('+');
	}
	else if (a < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
