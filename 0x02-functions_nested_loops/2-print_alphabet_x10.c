#include "main.h"
#include <stdio.h>

void print_alphabet_x10(void);

/**
 * main - check code
 *
 * Return: 0, success
 */
int main(void)
{
	int i = '0';
	char c;

	while (i < '10')
	{
		char c = 'a';
		
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
	i++;

	return (0);
}
