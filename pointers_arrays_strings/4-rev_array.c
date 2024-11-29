#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n)
{
	int j = n / 2;
	int i, k = n, b = 0;

	while (i < j)
	{
		b = a[k]; 
		a[k] = a[i]; 
		a[i] = b;
		i++;
		k--;
	}

}
