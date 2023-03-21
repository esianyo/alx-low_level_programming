#include "dog.h"
#include <stddef.h>

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
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
