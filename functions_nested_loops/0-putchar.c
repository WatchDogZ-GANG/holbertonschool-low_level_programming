#include <stdio.h>
#include "main.h"

/**
 * main - Print _putchar with putchar
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char a[] = "_putchar\n";

	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
	}
	return (0);
}
