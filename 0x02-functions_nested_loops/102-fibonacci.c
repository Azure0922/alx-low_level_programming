#include <stdio.h>
#include <unistd.h>

/**
 * main - function
 *
 * Return: 0, success
 */
int main(void)
{
	int i = 1;
	/* i - start */

	while (i += 50)
	{
		i = i + i;
		printf(",");
		printf(" ");
		i++;
	}
	return (0);
}
