#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes struct dog
 * struct dog - new type
 * @d: variable
 * @name: char variable
 * @age: floating variable
 * @owner: string variable
 *
 * Description: no long talk
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
