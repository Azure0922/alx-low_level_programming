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
	char c:

	scanf("%c", &c);
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
