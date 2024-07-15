#include <stdio.h>
#include "main.h"

/**
 * main - Betty docs
 *
 * Return: 0
 */

void print_to_98(int n)
{

int o, p;

p = 98;
o = n;

if (o < p)

	for (o = n; o <= p; o++)
	{

        	if (o == 98)
                	printf("%d\n", o);
        	else    
                	printf("%d, ", o);
	}
else if (o > p)
	for (o = n; o >= p; p--)
	{

		if (o == 98)
			printf("%d\n", o);
		else
			printf("%d, ", o);
	}
else
	printf("%d\n", o);
return (0);
}
