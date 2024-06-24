#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * char - n[] Les accolades viendrons se servir
 * de la valeur de a pour afficher le nombre
 * de lettre en se basant sur a++
 *
 * n = _putchar
 *
 * for - Pour a = 0, si a inferieur 8, a++ jusque 8
 * saut de ligne
 *
 * Return: 0
 */

int main(void)
{

/*char n &accolade pour definir tableau ASCII& = putchar recall n[]*/
char n[] = "_putchar";

/*entier a*/

int a = 0;
{

for (a = 0; a < 8; a++)
{
_putchar(n[a]);
_putchar('\n');
}
}
return (0);
}
