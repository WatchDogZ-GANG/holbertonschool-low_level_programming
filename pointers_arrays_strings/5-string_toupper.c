#include <stdio.h>
#include "main.h"

char *string_toupper(char *a)
{

    int b;

    for (b = a; b >= 97; )
    {
        for (b = a; b <= 122; )
        {
            a = b - 64;
        }
    }
}