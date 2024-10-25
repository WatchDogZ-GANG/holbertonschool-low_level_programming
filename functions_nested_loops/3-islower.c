#include <stdio.h>
#include "main.h"

/**
 * _islower - Verify if it's lowercase letter
 *
 * Return: 0
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
