#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void print_square(int size)
{

	int go;


	if (size <= 0)
	{

		_putchar('\n');
	}

	else
	{

		for (go = 0; go <= size; go++)
		{

			_putchar('#');
		}

		_putchar('\n');
	}
}
