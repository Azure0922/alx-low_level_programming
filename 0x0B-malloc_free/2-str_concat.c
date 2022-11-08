#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function
 *
 * @s1: char
 * @s2: char
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	strcat(s1, s2);

	s1 = (char *)malloc(strlen(s1) + strlen(s2));

	printf("%s", s1);
	free(s1);
	return (0);
}
