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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
#endif
