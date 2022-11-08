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
	if ((str == NULL) || (strcmp(str, " ") == 0))
	{
		return (NULL);
	}
	else
	{
		char *a = strtok(str, " ");
		/* a - char */
		
		a = (char *)malloc(sizeof(*a));
		printf("%s\n", a);

		free(a);
	}

	return (0);
}
