#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{

			for (j = 0; haystack[j] == needle[i]; j++)
			{

					return (needle);
					i++;
			}
		}
		haystack++;
	}
	return ('\0');
}
