#include "dog.h"
/**
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Ndog;
	char *cp_nam;
	char *cp_own;
	int i;

	Ndog = malloc(sizeof(dog_t));
	if (!Ndog || !name || !owner)
		return (0);

	cp_nam = malloc(sizeof(char) * (strlen(name) + 1));
	if (!cp_nam)
	{
		free(Ndog);
		return (0);
	}
	for (i = 0; name[i]; i++)
	{
		cp_nam[i] = name[i];
	}
	cp_nam[i] = 0;
	cp_own = malloc(sizeof(char) * (strlen(owner) + 1));
	if (!cp_own)
	{
		free(cp_nam);
		free(Ndog);
		return (0);
	}
	for (i = 0; owner[i]; i++)
	{
		cp_own[i] = owner[i]
	}
	cp_own[i] = 0;

	Ndog->name = cp_nam;
	Ndog->age = age;
	Ndog->owner = cp_own;

	return(Ndog);
}
