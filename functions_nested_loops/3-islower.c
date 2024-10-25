#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */
int _islower(int c)
{
	int a = c;

	if (a >= 97)
	{
		if (a <= 122)
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
