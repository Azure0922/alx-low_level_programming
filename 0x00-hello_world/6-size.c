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
	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(llongintType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));
	return (0);
}
