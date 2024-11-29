#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n)
{

	int i = 0, b = 0;

	while (i < n + 1)
	{

		b = a[i];
		a[i] = a[n];
		a[n] = b;
		n--;
		i++;
	}
}
