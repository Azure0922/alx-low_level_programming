#include <stdio.h>

/**
 * print_name - func
 *
 * @name: char
 * @f: void
 * @char: pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);

	printf("%s", name);
}
