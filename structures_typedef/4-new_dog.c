#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dof
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a new dog
 *
 * Decriprion: Create a new struct called Ndog, a new pointers called
 * cp_nam and cp_own.
 * using the function malloc to sorage the memory of a struct of tipe dog_t
 * then store in memory a space for the cp_nam and cp_own
 * and make a copy of name and owner
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

	return (Ndog);
}
