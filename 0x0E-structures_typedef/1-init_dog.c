#include <stdio.h>
#include "dog.h"

/*
 * init_dog - Initializes a variable of type struct dog with given values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to a string for the dog's name.
 * @age: Age of the dog.
 * @owner: Pointer to a string for the owner's name.
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
