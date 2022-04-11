#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - example of a struct combining different elements
* @name: first member
* @age: second member
* @owner: third member
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
