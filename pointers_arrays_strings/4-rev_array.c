#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n)
{

	int i = 0, j = 0;

	while (i != n)
	{

		i++;
	}

	int b[i];

	while (j < i)
	{

		b[i] = a[j];
		i--;
		j++;
	}

	a[n] = b[n];
}
