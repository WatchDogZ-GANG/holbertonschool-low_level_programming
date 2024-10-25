#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */
int _abs(int b)
{
	int a = b;

	if (a < 0)
	{
		return (a = -a);
	}
	return (a);
}
