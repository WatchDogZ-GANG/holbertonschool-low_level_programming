#include <stdio.h>

/**
 *
 *
 *
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
