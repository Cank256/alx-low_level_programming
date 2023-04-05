#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Function that prints a string followed by a new line
 * @s: Pointer to string
 *
 * Return: string
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
