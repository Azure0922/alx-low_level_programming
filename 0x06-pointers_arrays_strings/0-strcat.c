#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _strcat - function
 *
 * @dest: char
 * @src: char
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	write(1, dest, strlen(dest));

	return (0);
}
