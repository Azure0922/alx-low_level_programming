#include "main.h"
#include <stdio.h>

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
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	i++;

	return (0);
}
