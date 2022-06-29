#include "dog.h"
/**
 *
 *
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
