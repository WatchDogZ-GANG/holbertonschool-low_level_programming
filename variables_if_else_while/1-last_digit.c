#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*
* main - take last digit and do a verification
*
* Return: 0
*
*/

int main(void)
{
	
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int t;
	t = n % 10;
	
	if (t > 5)
	{	
		printf("Last digit of %d is %d and is greater than 5\n"), n, t);
	}
	else if (t == 0)
	{	
		printf("Last digit of %d is %d and is 0\n");
	}
	else
	{
		printf("Last digit of %d is %d and is  less than 6 and not 0\n");
	}
	return (0);
}
