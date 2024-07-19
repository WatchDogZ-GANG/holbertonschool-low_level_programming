#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void print_triangle(int size)
{

int a, b; /* Entier pour le nombre de lignes et le nombre de charact√res */

for (a = 0; a <= size; a++) /* Pour a qui est egal 1, si a inferieur ou egal a size, j'incremete a */
{
	for (b = 0; b <= size; b++) /* Pareil pour b */
	{

		if (b <= size - a) /* Si b est inferieur ou egal a size moins la valuer de a je print l'espace */
		{

			_putchar(' '); 
		}

		else if (a <= size)
		{

		_putchar('');
		}	
		else /* Sinon je print le caracter voulu */
		{

			_putchar('\n');
		}
	}
}
}
