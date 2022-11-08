#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function
 *
 * @size: int
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(sizeof(char) * size);
	/* s - array */

	if (size == 0)
	{
		return (NULL);
	}
	else if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned int i;
		/* i - int */

		for (i = 0; i < size; i++)
		{
			s[i] = c;
			printf("%c", s[i]);
		}
	}
	free(s);
	return (0);
}
