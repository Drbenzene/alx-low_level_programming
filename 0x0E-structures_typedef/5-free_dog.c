#include "dog.h"
#include <stdio.h>
/**
* free_dog - free memory from a dog structure
* @d: pointer to strut dog
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
