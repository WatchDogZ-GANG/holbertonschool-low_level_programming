#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */
int _isdigit(int c)
{

	int a = c;

	for (a = c; a >= 0)
	{

		if (a <= 9)
		{

			return (1);
		}
		else
		{

			return (0);
		}
	}
	return (0);
}
