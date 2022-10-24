#include <unistd.h>

/**
 * puts2 - function
 *
 * @str: char
 * Return: nil
 */
void puts2(char *str)
{
	for (int i = 0; i < strlen(str); i += 2)
	{
		write(1, str[i], sizeof(*str/2))
}
