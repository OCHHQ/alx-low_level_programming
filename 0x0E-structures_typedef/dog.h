#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - a struct that create a dog info
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Decription: first struct with alx
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
