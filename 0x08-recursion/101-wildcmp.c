#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * wildcmp - function
 *
 * @s1: char
 * @s2: char
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
	int r;
	/* r - cmp */

	r = strcmp(s1, s2);

	if (r == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
