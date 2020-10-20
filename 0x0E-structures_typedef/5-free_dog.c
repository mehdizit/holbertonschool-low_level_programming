#include "dog.h"
#include <stdlib.h>
/**
 * free_dog -  frees dogs.
 * @d : dog.
 *
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
