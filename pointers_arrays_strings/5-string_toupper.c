#include <stdio.h>
#include "main.h"

char *string_toupper(char *a)
{
    while (a >= 'a' && a <= 'z')
    {
        a = a - 64;
    }
}