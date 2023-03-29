#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string to be capitalized.
 *
 * Return: Pointer to the capitalized string.
 */
char *cap_string(char *str)
{
char *ptr = str;
int capitalize = 1;

while (*ptr)
{
if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' || *ptr == ';' ||
*ptr == '.' || *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' ||
*ptr == ')' || *ptr == '{' || *ptr == '}')
{
capitalize = 1;
}
else if (capitalize && *ptr >= 'a' && *ptr <= 'z')
{
*ptr -= 32;
capitalize = 0;
}
else
{
capitalize = 0;
}
ptr++;
}

return str;
}
