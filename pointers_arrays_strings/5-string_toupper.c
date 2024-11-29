#include <stdio.h>
#include "main.h"

char *string_toupper(char *a)
{

    char b = a;

    while (b >= 'a' && b <= 'z')
    {
        a = b - 64;
    }
}