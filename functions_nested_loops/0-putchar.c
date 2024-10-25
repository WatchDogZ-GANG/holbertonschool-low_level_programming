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
	char a[] = "_putchar";

	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}
