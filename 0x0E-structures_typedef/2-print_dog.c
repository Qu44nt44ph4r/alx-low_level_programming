#include <stdio.h>
#include "dog.h"

/*
 * print_dog - a function that prints a struct dog.
 *
 * Return: 0.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_FAILURE);
	if (d->name == NULL)
		d->name = ("(nil)");
	else if (d->owner == NULL)
		d->owner = (("nil"));
	printf("Name: %s\n Age: %6f\n Owner: %s\n", d->name, d->age, d->owner);
}
