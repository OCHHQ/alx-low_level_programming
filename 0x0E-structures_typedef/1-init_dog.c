#include <stdlib.h>
#include <string.h>

struct dog {
    char *name;
    float age;
    char *owner;
};

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
    {
        d = malloc(sizeof(struct dog));
        if (d == NULL)
        {
            return;
        }
    }

    d->name = strdup(name);
    if (d->name == NULL)
    {
        free(d);
        return;
    }

    d->age = age;

    d->owner = strdup(owner);
    if (d->owner == NULL)
    {
        free(d->name);
        free(d);
        return;
    }
}
