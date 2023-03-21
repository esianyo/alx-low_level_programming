#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog
 * @name: pointer for name
 * @age: dog's age
 * @owner: who owns it
 *
 * Description: about the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
