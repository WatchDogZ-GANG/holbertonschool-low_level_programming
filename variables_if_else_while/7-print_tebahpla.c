#include <stdio.h>

/**
* main - Gave alphabet from a to z
*
* Return: 0
*/

int main(void)
{

char alphabet;

for (alphabet = 'z'; alphabet <= 'a' ; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
