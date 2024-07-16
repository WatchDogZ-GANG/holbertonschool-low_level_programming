#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void print_diagonal(int n)
{

	int r;

	char a = "\";

	if (n != 0)
	{
		for (r = 0; r > n; r++)
		{
			_putchar(a);
			_putchar('\n');
		}
	}

	else
	{

		_putchar('\n');
	}

}
