#include <stdio.h>

/**
* main - Gave alphabet from a to z
*
* Return:0
*/

int main(void)
{

char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet != 'q' && alphabet != 'e')
{
putchar(alphabet);
}
}
putchar('\n');
return (0);
}
