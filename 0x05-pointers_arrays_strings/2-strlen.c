#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 *
 * Description: This function takes a string pointer as a parameter
 * and returns the length of the string (number of characters excluding
 * the null terminator).
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
