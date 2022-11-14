#include <stdlib.h>

/**
 * free_dog - func
 *
 * @d: dogt
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
