#include "dog.h"

/**
* init_dog - Creaye variable dog
* @d: pointer to dog struct
* @name: name of dog
* @age: age of dog
* @owner: the owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d !== NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
