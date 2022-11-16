#include <stdio.h>

/**
 * print_name - func
 *
 * @name: char
 * @f: void
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);

	printf("%s", name);
}
