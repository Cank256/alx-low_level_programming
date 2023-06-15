#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c1 = 'a';
char c2 = 'A';
if (_islower(c1))
{
printf("%c is lowercase\n", c1);
}
else
{
printf("%c is not lowercase\n", c1);
}
if (_islower(c2))
{
printf("%c is lowercase\n", c2);
}
else
{
printf("%c is not lowercase\n", c2);
}
return (0);
}
