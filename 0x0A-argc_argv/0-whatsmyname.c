#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints its name, followed by a new line.
* @argc: counts number of argument
* @argv: contains the argument entered
* Return: Always (0)
*/

int main(int argc, char *argv[])
{
if (argc >= 1)
{
printf("%s\n", argv[0]);
}
return (0);
}
