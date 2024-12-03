#include "main.h"

char *leet(char *a)
{

    int b, c;

    char d[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
    char e[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

    for (b = 0; a[b] != '\0'; b++)
    {

        for (c = 0; d[c] != '\0'; c++)
        {

            if (d[c] == a[b])
            {

                a[b] = e[c];
            }
        }
    }

    return (a);
}