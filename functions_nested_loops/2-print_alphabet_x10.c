#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - PERDU, c'est ma
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (b = 0; b <= 9; b++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
