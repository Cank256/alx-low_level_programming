#include "main.h"

/**
 * print_name - Prints a name
 * @name: A pointer to a string containing the name to print
 * @f: A pointer to a function that takes a char pointer argument and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
