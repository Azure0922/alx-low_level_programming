#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _strchr - function
 *
 * @s: char
 * @c: char
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	char *r;
	/* r - char */

	r = strchr(s, c);

	return (r);
}
