#include "dog.h"

/**
 * init_dog - initializes structure of dog type
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age:age of dog
 * @owner: pointer to the owner of the dofg
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
