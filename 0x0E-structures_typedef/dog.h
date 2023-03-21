#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - structure for dog
 * @name: pointer for name
 * @age: dog's age
 * @owner: who owns it
 *
 * Description: none
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
