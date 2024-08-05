#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void print_array(int *a, int n)
{

	int b;

	for (b = 0; b < n; b++)
	{

		if (b != n - 1)
		{

			printf("%d", a[b]);
		}

		else
		{

			printf("%d", a[b]);
		}

		printf(", ");
	}

	printf("\n");
}
