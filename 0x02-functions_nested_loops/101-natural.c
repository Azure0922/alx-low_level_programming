#include <stdio.h>
#include <unistd.h>

/**
 * main - function
 *
 * Return: 0, success
 */
int main(void)
{
	int i = 0;
	/* i - count */

	while (i < 1024)
	{
		while ((i % 3 == 0) || (i % 5 == 0))
		{
			i = i + i;
		}
		i++;
	}
	printf("%d", i);
	return (0);
}
