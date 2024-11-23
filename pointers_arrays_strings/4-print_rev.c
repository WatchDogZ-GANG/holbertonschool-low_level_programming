#include <stdio.h>
#include "main.h"

void print_rev(char *s)
{

	int a, b;

    for (a = 0; s[a] != '\0'; a++)
    {

        ;
    }

	for (b = a; b != -1; b--)
	{

		_putchar(s[b]);
	}
	_putchar('\n');
}
