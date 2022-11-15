#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name: 1
 * @age: 2
 * @owner: 3
 *
 * Description: this is a description
 *
 * dog_t - typedef
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
