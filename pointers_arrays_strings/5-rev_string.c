#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void rev_string(char *s)
{

int len = 0;
char a = ' ';

a--;

while (s[len] != '\0')
{
	len++;
}

while (len >= 0)
{

	len--;
	a = (s[len]);
}

}
