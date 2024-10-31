#include <stdio.h>
#include "main.h"

/**
 * print_line - Print _ X time
 *
 * Return: 0
 */
void print_line(int n)
{

	int a, b = n;

	if (b <= 0)
	{

		_putchar('\n');
	}

	for (a = 0; a < b; a++)
	{

		_putchar('_');

		if (a == b)
		{

			_putchar('\n');
		}
	}
}
