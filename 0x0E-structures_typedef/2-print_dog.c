#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: dog's structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (!(d->name))
	{
		printf("Name: (nil)\n");
	}
	if (!(d->owner))
	{
		printf("Owner: (nil)\n");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
