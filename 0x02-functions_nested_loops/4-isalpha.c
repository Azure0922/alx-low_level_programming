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
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
		write(1, "1", 1);
	}
	else
	{
		return (0);
	}
}
