#include <stdio.h>
#include <stdlib.h>

/**
* main - prints all arguments it receives
* @argc: counts number of argument
* @argv: contains the argument entered
* Return: Always (0)
*/

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
