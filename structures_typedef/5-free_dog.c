#include "dog.h"
/**
 * free_dog - free a dog
 * @dog: is a dog
 */
void free_dog(dog_t *dog)
{
	if (dog)
	{
		free(dog->name);
		free(dog->owner);
	}
	free(dog);
}
