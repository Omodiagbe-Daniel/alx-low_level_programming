#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of characters to be added to the first string
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
	i++;
}
while (src[j] != '\0' && i <= n)
{
	dest[i] = src[j];
	j++;
	i++;
}
return (dest);
}
