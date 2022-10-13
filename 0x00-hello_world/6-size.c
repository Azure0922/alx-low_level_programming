#include <stdio.h>

/**
 * main - Another description
 *
 * Return: 0, success
 *
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int llongintType;
	float floatType;

	/**
	 * sizeof describes the size of the data types
	 */
	printf("Size of a char: %lu bytes\n", sizeof(charType));
	printf("Size of an int: %lu bytes\n", sizeof(intType));
	printf("Size of a long int: %lu bytes\n", sizeof(longintType));
	printf("Size of a long long int: %lu bytes\n", sizeof(llongintType));
	printf("Size of a float: %lu bytes\n", sizeof(floatType));
	return (0);
}
