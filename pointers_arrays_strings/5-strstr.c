#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{

			while (haystack[i] == needle[j])
			{

					return (haystack);
					i++;
					j++;
			}
		}
		haystack++;
	}
	return ('\0');
}
