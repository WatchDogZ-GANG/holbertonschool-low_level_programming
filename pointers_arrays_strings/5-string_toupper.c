#include <stdio.h>
#include "main.h"

char *string_toupper(char *a)
{

    int b = a;

    while (b >= 97 && b <= 122)
    {
        a = b - 64;
    }
}