#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _puts - function
 *
 * @str: char
 * Return: 0
 */
void _puts(char *str)
{
	fwrite(str, sizeof(char), strlen(str), stdout);
	putchar('\n');
}
