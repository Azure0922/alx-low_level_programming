#include <stdio.h>

/**
 * print_dog - func
 *
 * @d: struct
 * Return: 0
 */
void print_dog(struct dog *d)
{
	struct dog *d;

	printf("%s\n", (*d).name);
	printf("%f\n", (*d).age);
	printf("%s\n", (*d).owner);
}
