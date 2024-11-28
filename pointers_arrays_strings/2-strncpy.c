#include <stdio.h>
#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{

	int a = 0, b = 0;

	while (src[a] < n)
	{
        dest[b] = src[a];
		a++;
		b++;
	}

	dest[a] = '\0';

	return dest;

}
