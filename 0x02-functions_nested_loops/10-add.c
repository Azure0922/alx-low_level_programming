#include "main.h"
#include <stdio.h>

int add(int, int);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	/**
	 * x- num 1
	 * y- num 2
	 * add - function
	 * n - sum
	 */
	int x, y, n;

	scanf("%d %d", &x, &y);
	n = add(x, y);
	/**
	 * x - first number
	 * y - second number
	 * n - sum
	 */

	fwrite(n, sizeof(n), 1, fp);
	return (0);

}

/**
 * add - function
 * x - num 1
 * y - num 2
 *
 * Return - sum
 */
int add(int x, int y)
{
	/**
	 * x - num
	 * y - num
	 *
	 * Return: sum
	 */
	int sum;

	sum = x + y;
	return (sum);
}
