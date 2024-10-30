#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */
void print_most_numbers(void)
{

	char a;

	for (a = '0'; a <= '9'; a++)
	{

		if (a == '2')
		{

			a++;
		}

		else if (a == '4')
		{

			a++;
		}

		_putchar(a);
	}

	_putchar('\n');
}
