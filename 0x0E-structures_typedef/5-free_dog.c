#include <stdlib.h>

typedef struct dog
{
	char  *name;
	float age;
	char *owner;
} dog_t;

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
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
