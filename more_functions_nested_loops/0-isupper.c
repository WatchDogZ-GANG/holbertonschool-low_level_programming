#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */
int _isupper(int c)
{

	int a = c;

	if (a >= 'A')
	{

		if (a <= 'Z')
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
