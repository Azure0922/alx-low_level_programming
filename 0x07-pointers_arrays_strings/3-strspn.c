#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _strspn - function
 *
 * @s: char
 * @accept: char
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int j;
	/* j - int */

	j = strspn(s, accept);

	return (j);
}
