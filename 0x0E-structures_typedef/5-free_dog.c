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
	free(d);
}
