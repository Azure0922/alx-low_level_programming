#include <unistd.h>
#include <string.h>

/**
 * print_rev - function
 *
 * @s: char
 * Return: 0
 */
void print_rev(char *s)
{
	revstr(s);
	write(1, "\n", 1);
}
