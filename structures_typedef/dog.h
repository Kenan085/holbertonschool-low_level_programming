#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - creates dog struct
 * name: name of the dog
 * age: age of the dog
 * owner: Papa of dog
 *
 * Description: Our first struct. It is all about dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
