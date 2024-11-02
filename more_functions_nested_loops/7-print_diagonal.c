#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Print n space for n line
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{

		b = 0;

		_putchar('\\');
		_putchar('\n');

		while (b < a)
		{
			b++;
			_putchar(' ');
		}
	}
}
