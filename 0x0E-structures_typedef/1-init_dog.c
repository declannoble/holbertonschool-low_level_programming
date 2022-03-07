#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises a variable of struct dog
 * @d: pointer to struct
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 * Return: 0 (success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
