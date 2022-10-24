#include <unistd.h>
#include <publib.h>

/**
 * print_rev - function
 *
 * @s: char
 * Return: 0
 */
void print_rev(char *s)
{
	strrev(s);
	write(1, "\n", 1);
}
