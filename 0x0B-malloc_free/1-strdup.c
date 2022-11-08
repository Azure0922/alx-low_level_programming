#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - function
 *
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *p = strdup(str);
	/* p - dup */

	p = malloc(strlen(*p));

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		printf("%s", p);
	}
	free(p);
	return (0);
}
