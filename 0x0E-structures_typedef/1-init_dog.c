#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: The dog to be initialized.
 * @name: The dog name.
 * @age: The dog age.
 * @owner: The dog owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
