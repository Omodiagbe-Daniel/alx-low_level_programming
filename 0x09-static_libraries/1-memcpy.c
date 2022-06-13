#include "main.h"

/**
* *_memcpy -  functions that copies memory area
* @dest: pointer (destination)
* @src: pointer (source)
* @n: unsigned integer
* Return: returns a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
