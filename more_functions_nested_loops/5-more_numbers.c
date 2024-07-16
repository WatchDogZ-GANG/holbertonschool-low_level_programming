#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{

		for (b = 0; b <= 14; c++)
		{

			if (b > 9)
			{

				_putchar((b / 10) + '0');
			}

			/* Imprimer le chiffre des unité */
			_putchar((b % 10) + '0');
		}

		/* Print un saut de ligne */
		_putchar('\n');
	}
}

