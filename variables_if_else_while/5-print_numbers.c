#include <stdio.h>

/**
 * main - Print from 0 to 9
 *
 * Return: 0
 */

int main(void)
{

	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
