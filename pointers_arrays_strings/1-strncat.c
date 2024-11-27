#include <stdio.h>
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{

	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}

	while (b < n && src[b] != "\0")
	{
			dest[a] = src[b];
			a++;
			b++;
	}

	dest[a] = '\0';

	return dest;

}
