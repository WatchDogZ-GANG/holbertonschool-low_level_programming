#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Random gen / 2 and see if it's pstv ou ngtv
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
