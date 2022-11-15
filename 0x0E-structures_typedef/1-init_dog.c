#include <stdio.h>
#include <string.h>

/**
 * init_dog - func
 * struct dog - func
 * struct dog me - var
 *
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
 * Return: void
 *
 * Description: this
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
