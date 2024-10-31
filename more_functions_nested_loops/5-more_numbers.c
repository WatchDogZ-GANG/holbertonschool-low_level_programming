#include <stdio.h>
#include "main.h"

/**
 * more_numbers - 10 time 0 to 14
 *
 * Retrun: 0
 */
void more_numbers(void)
{

	int a, b;

	for (a = 0; a < 10; a++)
	{

		for (b = 0; b <= 14; b++)
		{

			if (b > 9)
			{

				_putchar(b / 10 + 48);
			}

			_putchar(b % 10 + 48);
		}

		_putchar('\n');
	}
}
