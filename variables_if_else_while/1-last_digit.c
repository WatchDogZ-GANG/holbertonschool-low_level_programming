#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - take last digit and do a verification
*
* Return: 0
*
*/

int main(void)
{

int n, t;

srand(time(0));
n = rand() - RAND_MAX / 2;
t = n % 10;

if (t > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, t);
}
else if (t == 0)
{
printf("Last digit of %d is %d and is 0\n", n, t);
}
else if (t < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, t);
}
return (0);
}
