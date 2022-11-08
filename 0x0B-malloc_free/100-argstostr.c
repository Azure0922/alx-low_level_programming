#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function
 *
 * @ac: int
 * @av: char
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i;
	/* i - int */
	int a = 1;
	/* a - int */
	char *b;
	/* b - mem */

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}
	else
	{
		for (i = 1; i < ac; ++i)
		{
			a += (strlen(av[i]) + 1);
		}

		b = (char *)malloc(sizeof(char) * a);

		strcpy(b, av[1]);

		for (i = 2; i < ac; ++i)
		{
			strcat(b, " ");
			strcat(b, av[i]);
		}
	}
	printf("%s\n", b);
	free(b);

	return (0);
}
