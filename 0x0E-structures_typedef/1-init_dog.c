#include <stdlib.h>
#include <dog_h>

/**
 * init_dog - initialize a varaible of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name of initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
