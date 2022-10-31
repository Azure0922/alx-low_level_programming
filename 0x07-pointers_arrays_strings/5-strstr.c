#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _strstr - function
 *
 * @haystack: char
 * @needle: char
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;
	/* a - char */

	a = strstr(haystack, needle);

	return (a);
}
