#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n)
{
    int i = 0, j = 0;

    while (a[j])
    {

        j++;
    }

    while (--j > i)
    {

        int c = s[j];
        s[j] = s[i];
        s[i] = c;
        i++;
    }
}
