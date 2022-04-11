#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* init_dog - initializing a variable of type struct
* @dog *d: of type struct
* @name: first member
* @age: second member
* @owner: third member
* Return: Nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
