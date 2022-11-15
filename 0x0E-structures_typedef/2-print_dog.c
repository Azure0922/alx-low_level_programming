#include <stdio.h>

struct dog
{
	char *name;
	float age;
	char *owner
};

/**
 * print_dog - func
 * struct dog - func
 *
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
 * Return: 0
 *
 * Description: this
 */
void print_dog(struct dog *d)
{
	printf("%s\n", d->name);
	printf("%f\n", d->age);
	printf("%s\n", d->owner);
}
