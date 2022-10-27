#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _strncpy - function
 *
 * @src: char
 * @dest: char
 * @n: int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *a = dest;

	while (*a++ = (*src += n));
	return (dest);
}
