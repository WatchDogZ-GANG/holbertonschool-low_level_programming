#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] == needle[i])
			{

				i++;
				if (haystack[i] == needle[i])
				{

					return (haystack);
				}
			}
		}
		haystack++;
	}
	return ('\0');
}
