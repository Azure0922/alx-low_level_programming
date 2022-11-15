#include <stdlib.h>

/**
 * free_dog - func
 * struct dog - func
 * @name: char
 * @age: float
 * @owner: char
 *
 * @d: dogt
 * Return: void
 *
 * Description: this
 */
typedef struct dog
{
	char  *name;
	float age;
	char *owner;
} dog_t;

void free_dog(dog_t *d)
{
	void *p;
	/* p - heap */

	p = malloc(sizeof(*d));

	free(d->name);
	free(d->age);
	free(d->owner);
	free(p);
}
