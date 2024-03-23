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
	dog_t *neww;

	neww = malloc(sizeof(dog_t));
	if (!neww)
	{
		free(neww);
		return (NULL);
	}

	(*neww).name = malloc(sizeof(char) * strlen(name) + 1);
	(*neww).owner = malloc(sizeof(char) * strlen(owner) + 1);

	if (!(*neww).name || !(*neww).owner)
	{
		free(neww->name);
		free(neww->owner);
		free(neww);
		return (NULL);
	}
	strcpy((*neww).name, name);
	strcpy((*neww).owner, owner);
	neww->age = age;

	return (neww);
}