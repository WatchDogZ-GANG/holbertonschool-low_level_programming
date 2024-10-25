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
	char c[] = "_putchar\n";

	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}
