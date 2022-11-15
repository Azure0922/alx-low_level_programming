#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - func
 * struct dog - fun
 *
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	*d = &me;
	/* me - declared */
	
	struct dog me;
	/* me - struct */

	strcpy(me.name, name);
	me.age = age;
	strcpy(me.owner, owner);
}
