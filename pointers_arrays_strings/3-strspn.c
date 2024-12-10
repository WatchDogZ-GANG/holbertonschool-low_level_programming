#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int m;
	int i;

	while (*s)
	{
		m = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				m = 1;
		}
		if (m == 0)
			return (c);
		s++;
		c++;
	}
	return (c);
}