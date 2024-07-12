#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void times_table(void)
{

int a, b, c;

	for (a = 0; a <= 9; a++)
	{

		_putchar('0');
		
		for (a = 1; a <= 9; a++)
		{

			_putchar(',');
			_putchar(' ');

			c = a * b;

			if (b <= 9)
			{

				_putchar(' ');
			}
			else
			{

				_putchar((c / 10) + '0');
			}
		}

		_putchar((c % 10) + '0');
	}
}
