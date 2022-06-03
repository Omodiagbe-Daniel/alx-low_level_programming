#include "main.h"
#include <stdio.h>
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
* *str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: returns a pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int x, y, length, length1, length2;

	if (!*s1)
		s1 = "";
	else
		length1 = _strlen(s1);
	if (!s2)
		s2 = "";
	else
		length2 = _strlen(s2);

	length = length1 + length2 + 1;
	str = malloc(length * sizeof(char));
	if (!str)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];

	for (y = 0; s2[y] != '\0'; y++, x++)
		str[x] = s2[y];

	str[x] = '\0';
	return (str);
}
