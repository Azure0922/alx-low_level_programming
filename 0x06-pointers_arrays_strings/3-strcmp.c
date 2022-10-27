#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * *_strcmp - function
 *
 * @s1: char
 * @s2: char
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int r;
	/* r - compare */

	r = strcmp(s1, s2);

	return (r);
}
