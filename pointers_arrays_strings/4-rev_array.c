#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n)
{
	int j = n - 1; 
	int i, b = 0;

	for (i = 0; i < n - 1; i++)
	{
		b = a[j]; 
		a[j] = a[i]; 
		a[i] = b; 
		j--;
	}

}
