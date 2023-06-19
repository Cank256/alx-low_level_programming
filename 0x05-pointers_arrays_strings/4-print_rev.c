#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 *
 * Description: This function takes a string pointer as a parameter
 * and returns the length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string to be printed.
 *
 * Return: None
 *
 * Description: This function takes a string pointer as a parameter
 * and prints the string in reverse order, followed by a new line
 * to the standard output.
 */
void print_rev(char *s)
{
int length = _strlen(s);

while (length > 0)
{
write(1, &s[length - 1], 1);
length--;
}

write(1, "\n", 1);
}
