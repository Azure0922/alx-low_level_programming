#include <ctype.h>
#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: 1
 */
int main(void)
{
	char c;

	scanf("%c", &c);
	if (isupper(c))
	{
		return (0);
	}
	else if (islower(c))
	{
		return (1);
	}
}
