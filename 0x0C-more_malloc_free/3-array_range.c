#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */

int *array_range(int min, int max)
{
int i;
int *p;
int j = 0;

if (min > max)
{
return (NULL);
}
for (; min <= max; i++)
{
p = malloc(i * sizeof(int));
}
if (p == NULL)
{
return (NULL);
}
while (j < i)
{
p[j++] = min++;
}
return (p);
}
