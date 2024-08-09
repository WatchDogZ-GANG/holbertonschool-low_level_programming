#include <stdio.h>
#include "main.h"

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a++])
	{
		b++;
	}
	
	for (a = 0; src[a]; a++)
	{
		dest[b++] = src[a];
	}
	
	return (dest);
}
