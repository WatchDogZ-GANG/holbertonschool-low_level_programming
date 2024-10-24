#include <stdio.h>

/**
 * main - Print without Q and E
 *
 * Return: 0
 */

int main(void)
{

	char a;

	for (a = '`'; a <= 'z'; a++)
	{
		if (a != 'e')
		{
			if (a != 'q')
			{
				putchar(a);
			}
		}
	}
	
	putchar('\n');
	return (0);
}
