#include "dog.h"
#include <stddef.h>

/**
* init_dog - initialize a variable of type struct dog.
* @d: dog structure.
* @name: Name of the dog.
* @age: Age of the dg.
* @owner: Owner of the dog.
* Return: 0.
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
