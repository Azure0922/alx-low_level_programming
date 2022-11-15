#include <stdio.h>
#include <string.h>

/**
 * new_dog - func
 * struct dog - func
 * @name: char
 * @age: float
 * @owner: char
 *
 * Return: 0
 *
 * Description: this
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner)
{
	void *p;
	/* p - void */

	p  = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p->name, name);
	p->age = age;
	strcpy(p->owner, owner);

	return (p);
}
