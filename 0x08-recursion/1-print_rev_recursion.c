#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _print_rev_recursion - function
 *
 * @s: char
 * Return: nil
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
