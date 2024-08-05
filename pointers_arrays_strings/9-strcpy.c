#include <stdio.h>
#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int b = 0;

	while (*(src + b) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';
	return (dest);
}
