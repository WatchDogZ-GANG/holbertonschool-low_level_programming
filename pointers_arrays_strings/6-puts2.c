#include <stdio.h>
#include "main.h"

void puts2(char *str)
{

	int a = 0;

	while (str[a])
	{

		_putchar(str[a]);
		a += 2;
	}

	_putchar('\n');
}