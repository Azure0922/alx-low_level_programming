#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	memcpy(new_dog->name, name, strlen(name) + 1);
	memcpy(new_dog->age, age, strlen(age) + 1);
	memcpy(new_dog->owner, owner, strlen(owner) + 1);

	return (0);
}
