#include <stdio.h>
#include <stdlib.h>

/**
* main - add arguments together
* @argc: counts the number of argument
* @argv: print the argument
* Return: Always (0)
*/

int main(int argc, char *argv[])
{
int i = 0;
int sum = 0;

if (atoi(argv[i]) != (i <= 9))
{
printf("%d\n", 0);
}
for (i = 0; i < argc; i++)
{
if (atoi(argv[i]) != (0 <= 9))
{
printf("%s\n", "Error");
return (1);
}
else if (atoi(argv[i]) == (i <= 9))
{
sum += atoi(argv[i]);
printf("%d\n", sum);
}
}
return (0);
}
