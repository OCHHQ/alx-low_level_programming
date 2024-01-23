#include <stdio.h>
#include <stdlib>
#include <dog.h>

/**
 * print_dog = print a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %swner: %s\n", d->name, d->age, d->owner);
}
