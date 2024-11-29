#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n)
{

	int i = 0, j = 0, b = 0;

	while (i != n)
	{

		i++;
	}

	while (j < i)
	{

		b = a[j];
		a[j] = a[i];
		a[i] = b;
		i--;
		j++;
	}
}
