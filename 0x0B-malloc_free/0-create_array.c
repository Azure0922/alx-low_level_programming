#include <stdio.h>

/**
 * create_array - function
 *
 * @size: int
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *s[];
	/* s - char */

	char *s = c;

	s = malloc(sizeof(*s) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else if (s == NULL)
	{
		return (NULL);
	}
	return (0);
}
