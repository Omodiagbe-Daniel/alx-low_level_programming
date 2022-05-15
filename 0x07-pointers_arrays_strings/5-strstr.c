#include "main.h"
#include <stdio.h>

/**
* *_strstr - locates a substring
* @haystack: first parameter
* @needle: second parameter
* Return: Always 0
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (*haystack == needle[i++])
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
