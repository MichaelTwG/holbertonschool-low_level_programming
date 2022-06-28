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
	int i;

	if (d == 0)
		exit(0);

	(*d).age = age;

	for (i = 0; name[i]; i++)
		d->name[i] = name[i];
	for (i = 0; owner[i]; i++)
		d->owner[i] = owner[i];
}
