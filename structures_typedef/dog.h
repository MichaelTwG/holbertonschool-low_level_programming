#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - name, age, owner of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 *
 * Description: a dog is a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
