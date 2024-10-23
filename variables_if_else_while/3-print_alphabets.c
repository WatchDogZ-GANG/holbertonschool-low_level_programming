#include <stdio.h>

/**
 * main - Print alphabet A to Z & a to z
 *
 * Return: 0
 */
int main(void)
{
	char a, n;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	for (n = a - 32; n <= 'Z'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
