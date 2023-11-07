#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_FAILURE);
	if (d->name == NULL)
		d->name = ("(nil)");
	else if (d->owner == NULL)
		d->owner = (("nil"));
	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);

	/*d->name = name;
	d->age = age;
	d->owner = owner;*/
}
