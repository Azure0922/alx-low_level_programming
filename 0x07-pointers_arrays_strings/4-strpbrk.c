#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _strpbrk - function
 *
 * @s: char
 * @accept: char
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;
	/* a - char */

	a = strpbrk(s, accept);

	return (a);
}	
