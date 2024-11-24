#include <stdio.h>
#include "main.h"

void rev_string(char *s)
{

    int a = 0, b = 0;

    while (s[a])
    {

        a++;
    }

    while (a-- > b)
    {

        char c = s[a];
        s[a] = s[b];
        s[b] = c;
        b++;
    }
}
