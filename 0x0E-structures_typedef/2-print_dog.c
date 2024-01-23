#include <stdio.h>
#include <stdlib.h>
#include <dog.h>

/**
 * print_dog - print a struct dog
 * @d: struct dog to print
 */
void print_dog(const struct dog *d)
{
	if (d == NULL)
		return;

	const char *name_to_print = (d->name != NULL) ? d->name : "(nil)";
	const char *owner_to_print = (d->owner != NULL) ? d->owner : "(nil)";
	
	printf("Name: %s\nAge: %.2f\nOwner: %s\n", name_to_print, d->age, owner_to_print);
}
