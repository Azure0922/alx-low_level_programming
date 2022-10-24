#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - function
 *
 * @dest: dest
 * @src: src
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(src, dest);
	puts(src);
	return (0);
}
