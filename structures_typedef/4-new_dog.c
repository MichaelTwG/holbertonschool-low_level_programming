#include "dog.h"
/**
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog->age = age;
	n_dog->name = name;
	n_dog->owner = owner;

	return (n_dog);
}
