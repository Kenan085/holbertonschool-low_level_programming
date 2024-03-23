#include "dog.h"

/**
 * new_dog - A function that creates a new dog
 * @name: the name of our Puppy
 * @age: Never ask dog her/his name
 * @owner: Puppy's dad
 *
 * Return: Null if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	(*new).name = malloc(sizeof(char) * strlen(name) + 1);
	(*new).owner = malloc(sizeof(char) * strlen(owner) + 1);

	if (!(*new).name || !(*new).owner)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}
	strcpy((*new).name, name);
	strcpy((*new).owner, owner);
	new->age = age;

	return (new);
}
