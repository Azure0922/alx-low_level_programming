#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - function
 *
 * @str: char
 * Return: 0
 */
char **strtow(char *str)
{
	char *a = strtok(str, " ");
	/* a - char */

	while (a != NULL)
	{
		printf("%s\n", a);
	}
	a = strtok(NULL, " ");

	return (0);
}
