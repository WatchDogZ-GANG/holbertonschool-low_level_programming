#include <stdio.h>
#include "main.h"

/**
 * print - Print n square for n line
 *
 * Return: 0
 */
void print_square(int s)
{
int a, b;

if (s <= 0)
{
_putchar('\n');
return;
}

for (a = 0; a < s; a++)
{
for (b = 0; b < s; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
