#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialisation variable structur dog
 * @d: contient l'adresse mémoire de my_dog
 * @name: nom du chien
 * @age: age du chien
 * @owner: nom du propriétaire
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
