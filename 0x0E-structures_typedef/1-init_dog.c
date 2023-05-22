#include<stdlib.h>
#include "dog.h"

/**
 * init_dog - a function  that initialize a variable of type struct dog.
 * @d: pointeur of structure
 * @name: char
 * @age: int
 * @owner: char
 *
 * Return: 1 or 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

