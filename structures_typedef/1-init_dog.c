#include "dog.h"
/**
 * init_dog - 
 * @d: addres to a structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * d->name || (*d).name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		return;
	}
	d->name = name;
	(*d).age = age;
	(*d).owner = owner;
}
