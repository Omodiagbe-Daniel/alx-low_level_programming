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
	while (*s != '\0')
	{
		if (*s == c)
        	{
                	return (s);
		}
	s++;
	}
	if (*s != c)
        {
                return (NULL);
        }
	return (0);
}
