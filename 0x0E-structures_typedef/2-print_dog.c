#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (!d->name)
		d->name = "(nil)";
	if (!d->age)
		d->age = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";
	if (d)
	{
		printf("Name: %s", d->name);
		printf("Age: %d", d->age);
		printf("Owner: %s", d->owner);
	}
}
