#ifndef DOG_H
#define DOG_H

/**
 *struct dog - informations sur un chien
 *@name: nom du chien
 *@age: age du chien
 *@owner: nom du propriétaire
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

