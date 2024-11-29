#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n)
{
    int i = 0, j = n;

    while (--j > i)
    {

        int c = a[j];
        a[j] = a[i];
        a[i] = c;
        i++;
    }
}
