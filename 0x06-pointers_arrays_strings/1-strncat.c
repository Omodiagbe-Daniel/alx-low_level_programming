#include "main.h"

/**
* *_strncat - concatenates two strings
* @dest: first parameter
* @src: second parameter
* @n: third parameter
* Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}


