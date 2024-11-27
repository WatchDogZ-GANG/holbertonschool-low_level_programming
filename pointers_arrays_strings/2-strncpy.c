#include <stdio.h>
#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{

	int a = 0;

	while (src[a] < n)
	{
        dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';

	return dest;

}
