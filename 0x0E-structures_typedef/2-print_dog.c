#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Event point
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);

	if (d->name == NULL || d->age == NULL || d->owner == NULL)
		printf("(nil)");

	printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}
