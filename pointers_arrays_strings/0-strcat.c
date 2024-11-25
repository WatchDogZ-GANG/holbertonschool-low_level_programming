#include <stdio.h>
#include "main.h"

char *_strcat(char *dest, char *src)
{

	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}

	while (src[b])
	{
			dest[a] = src[b];
			a++;
			b++;
	}

	dest[a] = '\0';

	return dest;

}
