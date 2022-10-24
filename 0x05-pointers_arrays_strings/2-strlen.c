#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _strlen - function
 *
 * @s: char
 * Return: c
 */
int _strlen(char *s)
{
	write(1, s, strlen(s) + 1);
	return (s);
}
