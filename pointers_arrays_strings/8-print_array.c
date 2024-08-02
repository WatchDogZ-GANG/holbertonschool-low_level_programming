#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void print_array(int *a, int n)
{

	int b = 0;
	int c = 0;

	while (n[b] > a)
	{

		b++;
	}

	while (c > b)
	{

		putchar(a[c]);
		printf(", ");
		c++;
	}

	putchar('\n');

}
