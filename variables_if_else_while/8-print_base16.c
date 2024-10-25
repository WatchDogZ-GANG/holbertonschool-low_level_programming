#include <stdio.h>

/**
 * main - Print 0 to 9 / 'a' to 'f'
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
	for (a = '9' + 40; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
