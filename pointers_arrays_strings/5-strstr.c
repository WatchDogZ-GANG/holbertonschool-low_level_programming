#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{

			while (haystack[i] == needle[j])
			{

					return (haystack[i]);
					i++;
					j++;
			}
		}
		haystack++;
	}
	return ('\0');
}
