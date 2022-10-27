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
	printf("%s", dest);

	return (0);
}
