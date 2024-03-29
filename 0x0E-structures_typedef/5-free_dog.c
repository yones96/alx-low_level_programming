#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog
 * @d: struct dog to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
