#include <stdio.h>

/**
 * main - Alphabet enumerator
 *
 * Return: 0
 */

int main(void)
{

	char a = 'a';

	while (a != '{')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}