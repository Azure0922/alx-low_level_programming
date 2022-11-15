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
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);

	return (new_dog);
}
