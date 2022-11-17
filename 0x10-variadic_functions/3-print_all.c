#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#define END_OF_LIST NULL

/**
 * print_all - func
 *
 * @format: const
 * Return: vpoid
 */
void print_all(const char * const format, ...)
{
	va_list a;
	/* a - va */

	va_start(a, format);

	const char *str = format;

	while (str != END_OF_LIST)
	{
		printf("%s", str);
		str = va_arg(a, const char*)
	}
	va_end(a);
	printf("\n");
}
