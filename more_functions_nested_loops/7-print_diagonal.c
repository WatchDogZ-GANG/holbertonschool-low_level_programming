#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void print_diagonal(int n)
{

	int r, f;

	char a = '\\';

	if (n <= 0)
	{

		_putchar('\n');
	}

	else
	{

		for (r = 0; r > n; r++)
		{

			for (f = 0; f < r; f++)
			{

				_putchar(' ');
			}

			_putchar(a);
			_putchar('\n');
		}
	}

}
