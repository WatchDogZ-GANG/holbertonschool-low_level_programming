#include <stdio.h>
#include "main.h"

char *string_toupper(char *a)
{

    int i;

    while (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a = a - 32;
        }
    }

    return (a);
}