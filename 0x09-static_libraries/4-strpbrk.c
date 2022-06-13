#include "main.h"
#include <stdio.h>
/**
* *_strpbrk - searches a string for any set of bytes
* @s: first parameter
* @accept: second parameter
* Return: Always 0
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
