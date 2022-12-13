#include <stdio.h>

/**
 * before - prints a string before main func executes
 */

void before(void) __attribute__ ((constructor));
void before(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
