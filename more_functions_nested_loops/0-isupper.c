#include "main.h"
#include <stdio.h>


/**
 * main - si C est est superieur ou egal a A et
 * inferieur ou egal a Z c'est une maj print 1
 * sinon c'est une minuscule print 0
 *
 * Return: 0
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
