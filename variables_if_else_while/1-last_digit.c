#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;
	while (n > 0)
	{
		if (n > 5)
		{
			printf("Last digit of %d is %d and is greater than 5", n, s);
		}
		else if (n < 6; n != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0", n, s);
		}
		else
		{
			printf("Last digit of %d is %d and is 0", n, s);
		}
	}
	return (0);
}
