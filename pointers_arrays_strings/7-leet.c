#include "main.h"

char *leet(char *a)
{

    int b;

    for (b = 0; a[b] != '\0'; b++)
    {

        if (a[b] == 'a' || a[b] == 'A')
        {

            a[b] = '4';
        }

        else if (a[b] == 'e' || a[b] == 'E')
        {

            a[b] = '3';
        }

        else if (a[b] == 'o' || a[b] == 'O')
        {

            a[b] = '0';
        }

        else if (a[b] == 't' || a[b] == 'T')
        {

            a[b] = '7';
        }

        else if (a[b] == 'l' || a[b] == 'L')
        {

            a[b] = '1';
        }

        else
        {

            ;
        }

		while (a[b] >= 'a' && a[b] <= 'z')
		{
			a[b] = a[b] - 32;
		}
	}

    return (a);
}