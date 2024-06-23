#include <stdio.h>

/**
* main - Make count 0 to 9
*
* Return:0
*/

int main(void)
{

int digit;

for (digit = 0; digit < 10; digit++)
{
putchar(digit + '0');
}
putchar('\n');
return (0);
}
