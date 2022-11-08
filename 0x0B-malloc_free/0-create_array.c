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
	char s[size];
	/* s - char */

	s = malloc(sizeof(char) * size);

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
		int i;
		/* i - int */

		for (i = 0; i < size; i++)
		{
			s[i] = a;
			printf("%c", s[i]);
		}
	}
	(void) c;

	free(s);
	return (0);
}
