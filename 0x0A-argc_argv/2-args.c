#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *
 * @argv: vector
 * @argc: count
 * Return
 */
int main(int argc, char *argv[])
{
	int i;
	/* i - loop */

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
