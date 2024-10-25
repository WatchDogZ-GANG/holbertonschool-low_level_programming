#include <stdio.h>
#include "main.h"

/**
 * main - Print Alphabet, one more time
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
