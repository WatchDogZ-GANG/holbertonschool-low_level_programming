#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void print_triangle(int size)
{

int a, b;

for (a = 0; a < size; a++)
{
	for (b = 0; b < size; b++)
	{

		_putchar('#');
	}

	_putchar('\n');
}
}
