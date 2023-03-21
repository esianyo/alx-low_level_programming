#include <stdlib.h>
#include <string.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - Function to create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Always
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = strlen(name) + 1;
		own_l = strlen(owner) + 1;
		max_dog = malloc(sizeof(dog_t));

		if (max_dog == NULL)
			return (NULL);

		max_dog->name = malloc(sizeof(char) * name_l);

		if (max_dog->name == NULL)
		{
			free(max_dog);
			return (NULL);
		}

		max_dog->owner = malloc(sizeof(char) * own_l);

		if (max_dog->owner == NULL)
		{
			free(max_dog->name);
			free(max_dog);
			return (NULL);
		}

		max_dog->name = strcpy(max_dog->name, name);
		max_dog->owner = strcpy(max_dog->owner, owner);
		max_dog->age = age;
	}

	return (max_dog);
}

/**
 * _strlen - Return the length of a string
 * @s: String to count
 * Return: String length
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - copy a string
 * @dest: destination value
 * @src: Source value
 * Return: The pointer to dest
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
