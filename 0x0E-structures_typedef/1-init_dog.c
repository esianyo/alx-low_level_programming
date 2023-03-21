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

/**
 * main - entry point
 *
 * Return: nothing
 */

int main(void)
{
	struct dog my_dog;
	char *name = "Spiky";
	float age = 11;
	char *owner = "Esianyo";

	init_dog(&my_dog, name, age, owner);

	init_dog(&my_dog, name, age, owner);

	printf("My dog's name is %s.\n", my_dog.name);
	printf("My dog is %.1f years old.\n", my_dog.age);
	printf("My dog's owner is %s.\n", my_dog.owner);
}
