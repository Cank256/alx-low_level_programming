#include "main.h"
#include <stdio.h>

/**
 * function to check if the character is in uppercase
 *
 * Return: (1) Success
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
