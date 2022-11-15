#include <stdio.h>
#include "dog.h"

/**
 * print_dog - func
 * struct dog - func
 *
 * @d: struct
 * Return: 0
 */
void print_dog(struct dog *d)
{
	*d = &me;
	/* me - declared */

	struct dog me;

	printf("%s\n", me.name);
	printf("%f\n", me.age);
	printf("%s\n", me.owner);
}
