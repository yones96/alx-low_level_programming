#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	char *name = d->name ? d->name : "(nil)";
	char *owner = d->owner ? d->owner : "(nil)";

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", name, d->age, owner);
}
