#include <stdio.h>
#include "main.h"

/**
 * print_line - Print _ X time
 *
 * Return: 0
 */
void print_line(int n)
{

	int a;

	for (a = 0; a < n; a++)
	{

		_putchar('_');
	}

	_putchar('\n');
}
