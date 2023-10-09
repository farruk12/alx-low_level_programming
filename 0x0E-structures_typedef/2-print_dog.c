#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog -  function that prints a struct dog
 *@d: a strct pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	(d->name == NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	if (d->age >= 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
