#ifndef MAIN_H_
#define MAIN_H_
#include <unistd.h>
#include <ctype.h>
#include <assert.h>

void foo();
int bar(int x, int y);
float baz(float a, float b, float c);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c);

#endif
