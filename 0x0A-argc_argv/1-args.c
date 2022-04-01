#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the number of arguments passed into it.
* @argc: counts number of argument
* @argv: contains the argument entered
* Return: Always (0)
*/

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", --argc);
return (0);
}
