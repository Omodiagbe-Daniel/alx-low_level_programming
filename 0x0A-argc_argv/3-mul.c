#include <stdio.h>
#include <stdlib.h>

/**
* main - printd the multiplication of two numbers
* @argc: counts the number of argument
* @argv: print the argument
* Return: Always (0)
*/

int main(int argc, char *argv[])
{
if (--argc <= 1 || argc > 2)
{
printf("%s\n", "Error");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}
