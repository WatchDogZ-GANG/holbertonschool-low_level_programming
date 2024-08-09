#include <stdio.h>
#include "main.h"

char *_strcat(char *dest, char *src)
{
	int index, dest_len;

	for (index = 0; dest[index], index++)
	{
		dest_len++;
	}
	
	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	
	return (dest);
}
