#include <stdio.h>
#include "main.h"

int print_sign(int n)
{

	if (n >= 1 && n <= 9)
	{
		_putchar(98);
		return (1);
	}

	else if (n == 0)
	{
		_putchar(0xff);
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}

