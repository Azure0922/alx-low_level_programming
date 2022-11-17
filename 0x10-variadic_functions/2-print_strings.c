#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - func
 *
 * @separator: consr
 * @n: int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	/* a - va */

	unsigned int i;
	/* i - count */

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		while (separator)
		{
			printf("%s", separator);
			separator = va_arg(a, const char*);
		}
	}
	va_end(a);
	printf("\n");
}
