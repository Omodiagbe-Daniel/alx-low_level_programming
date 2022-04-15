#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
* main - checks the code
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int d;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("%s\n", "Error");
		exit(100);
	}
	f = get_op_func(argv[2]);
	d = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", d);
	return (0);
}

