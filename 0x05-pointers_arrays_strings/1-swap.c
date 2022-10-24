#include <unistd.h>

/**
 * swap_int - function
 *
 * @a: int
 * @b: int 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a = *a - *b;

	*b = *a + *b;

	*a = *b - *a;

}
