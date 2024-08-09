#include <stdio.h>
#include "main.h"

char *_strcat(char *dest, char *src)
{

	int b = 0;

	while (src[b] != '\0')
	{

		(dest[b]) = (src[b];
		b++;
	}
	
	(dest[b]) = '\0';
	return (dest);
}
