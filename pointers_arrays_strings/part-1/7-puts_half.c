#include <stdio.h>
#include "main.h"

void puts_half(char *str)
{

		int a = 0, b;

		while (str[a])
		{
				a++;
		}
		b = a / 2 + (a % 2);
		while (b < a)
		{
				_putchar(str[b]);
				b++;
		}
		_putchar('\n');
}
