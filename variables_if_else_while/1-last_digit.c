#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - See the size of the last number
 *
 * Return: 0
 */
int main(void)
{
	int n, s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;

	if (s < 6)
	{
		if (s != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
		}
		else
		{
			printf("Last digit of %d is %d and is 0\n", n, s);
		}
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, s);
	}
	return (0);
}
