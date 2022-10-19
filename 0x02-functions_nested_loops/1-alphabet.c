#include "main.h"
#include <stdio.h>

void print_alphabet(void);

/**
 * main - check code
 *
 * Return: 0, success
 */
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	

	return (0);
}
