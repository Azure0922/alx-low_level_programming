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
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		char *a = strtok(str, " ");
		/* a - char */
		int i;
		/* i - len */

		i = strlen(str);

		a = (char *)malloc(sizeof(char) * i);
		printf("%s\n", a);

		free(a);
	}

	return (0);
}
