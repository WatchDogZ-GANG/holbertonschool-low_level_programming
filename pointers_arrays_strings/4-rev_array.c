#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n)
{
	int j = n / 2; 
	int i, b = 0;

	while (i < j)
	{
		b = a[n]; 
		a[n] = a[i]; 
		a[i] = b;
		i++;
		n--;
	}

}
