#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: Pointer to the string.
 *
 * Return: None.
 */
void puts_half(char *str)
{
int length = strlen(str);
int start;

if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2 + 1;
}

while (str[start] != '\0')
{
printf("%c", str[start]);
start++;
}

printf("\n");
}
