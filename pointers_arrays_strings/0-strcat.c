#include <stdio.h>
#include "main.h"

/*
 * main - Betty coding style
 *
 * Return: dest
 */

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
