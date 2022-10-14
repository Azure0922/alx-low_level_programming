#include <stdio.h>

/**
 * main - putchar to print
 *
 * Return: 0, success
 */
int main(void)
{
	int x;
	/**
	 * x - integers
	 */

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
