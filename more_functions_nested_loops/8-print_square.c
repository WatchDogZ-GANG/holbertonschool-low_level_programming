#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void print_square(int size)
{

	int go, to;


	if (size <= 0)
	{

		_putchar('\n');
	}

	else
	{
		for (go = 0; go < size; go++)
		{

			for (to = 0; to < size; to++)
			{

				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
