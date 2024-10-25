#include <stdio.h>
#include "main.h"

/**
 * _islower - Verify if it's lowercase letter
 *
 * c - Dude, what is this freaking doc
 *
 * Return: 0
 */
int _isalpha(int c)
{
	int a = c;

	if (a >= 97)
	{
		if (a <= 122)
		{
			return (1);
		}
		
	}
	else if (a >= 65)
	{
		if (a <= 90)
		{
			return (1);
		}
	}
	return (0);
}
