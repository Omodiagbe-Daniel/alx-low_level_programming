#include "main.h"
#include <stdlib.h>


/**
 * _strlen - function that returns the length of a string.
 * @s: parameter is of type char
 * Return: Always 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
* *string_nconcat - concatenates two strings
* @s1: first parameter
* @s2: second parameter
* @n: third parameter
* Return: returns a pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2, i = 0, j = 0;

	if (!s1)
		s1 = "";
	else
		len1 = _strlen(s1);
	if (!s2)
	{
		s2 = "";
	}
	else
	{
		len2 = _strlen(s2);
	}
	p = malloc((len1 + len2 + 1) * sizeof(char));
	if (!p)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	if (n >= len2)
	{
		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			p[i] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n; j++, i++)
		{
			p[i] = s2[j];
		}
		p[i] = '\0';
	}
	return (p);
}
