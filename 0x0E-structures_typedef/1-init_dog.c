#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - to initialize struct dog.
 *
 *return: (0)
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;

	return ;
}
