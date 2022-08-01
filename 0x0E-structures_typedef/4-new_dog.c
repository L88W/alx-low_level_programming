#include <stdlib.h>
#include "dog.h"

int _strLen(char *str);
void fillMem(char *str, int strLen, char *dest);

/**
 * new_dog - creates new dod
 * @name: name of hond
 * @age: age of mutt
 * @owner: owner of pup
 *
 * Return: Pointer to new dog (Success)
 * Null if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int nameLen, ownerLen;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	nameLen = _strLen(name);
	n_dog->name = malloc(sizeof(char) * nameLen + 1);

	if (n_dog->name == NULL)
	{
		free(n_dog);

		return (NULL);
	}

	fillMem(name, nameLen, n_dog->name);

	ownerLen = _strLen(owner);
	n_dog->owner = malloc(sizeof(char) * ownerLen + 1);

	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}

	fillMem(owner, ownerLen, n_dog->owner);

	n_dog->age = age;

	return (n_dog);

}
/**
 * strLen - Gets length of string
 * @str: string
 * Return: length of string
 */
