#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_dog - prints struct dog
 *@d: contaains elements name age and owner
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nOwner: %s\nAge: %f\n", d->name, d->owner, d->age);
}
