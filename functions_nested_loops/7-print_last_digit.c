#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

int print_last_digit(int r)
{

int y = r % 10;

if ( y < 0)
y *= -1;

_putchar (y + '0');

return (y);
}
