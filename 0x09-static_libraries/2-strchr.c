#include "main.h"
#include <stdio.h>

/**
* *_strchr -  functions that locates a character in a string
* @s: pointer that points to character
* @c: parameter of type char
* Return: Returns a pointer
*/

char *_strchr(char *s, char c)
{
	int i, j = 0;

	if (s)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] != c)
			{
				j++;
			}
			if (s[i] == c)
			{
				s[i] = s[j];
				j++;
				i++;
			}
		}
	}
	return (NULL);
}
