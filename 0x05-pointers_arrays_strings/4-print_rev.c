#include "main.h"

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
