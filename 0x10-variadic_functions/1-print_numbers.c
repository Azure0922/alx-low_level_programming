#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>

/**
 * print_numbers - func
 * va_list - typedef
 *
 * @separator: char
 * @n: int
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	/* a - va */

	unsigned int i;
	/* i - count */

	const char *s = separator;
	/* s - new */

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(a, const char*);

		if (isdigit(s))
		{
			printf("%s", s);
		}
	}
	va_end(a);

	printf("\n");

	if (separator == NULL)
	{
		printf("\n");
	}
}
