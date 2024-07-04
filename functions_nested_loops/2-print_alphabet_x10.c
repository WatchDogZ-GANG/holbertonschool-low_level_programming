#include <stdio.h>
#include "main.h"

/**
 * main - machin truc
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{

char a;
int i;

for (i = 0; i <= 9; i++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
