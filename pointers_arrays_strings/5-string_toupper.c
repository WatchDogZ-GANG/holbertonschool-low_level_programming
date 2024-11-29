#include <stdio.h>
#include "main.h"

char *string_toupper(char *a)
{

    int i;

    for (i = 0; a[i] != '\0'; i++)
    {
        while (a >= 'a' && a <= 'z')
        {
            a = a - 64;
        }
    }

}