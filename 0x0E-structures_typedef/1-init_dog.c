#include <stdio.h>
#include "dog.h"
/**
 * init_dog - program
 * @d: size 
 * @name: size 
 * @age: size 
 * @owner: size
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
