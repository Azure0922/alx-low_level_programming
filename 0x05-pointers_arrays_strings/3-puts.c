#include <stdio.h>
#include <string.h>

/**
 * _puts - function
 *
 * @str: char
 * Return: 0
 */
void _puts(char *str)
{
	fwrite(str, sizeof(char), strlen(str) + 1, stdout);
	write(1, "\n", 1);
}
