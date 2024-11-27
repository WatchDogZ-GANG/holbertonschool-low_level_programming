#include <stdio.h>
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{

	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}

	while (src[b] != '\0')
	{
			dest[a] = src[b];
			a++;
			b++;
	}

	dest[a] = '\0';

	n = n;

	return dest;

}
