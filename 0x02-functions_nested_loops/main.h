#ifndef MAIN_H_
#define MAIN_H_
#include <unistd.h>

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

/*
 * Using prototype
 * Return: (0)
 */

void print_alphabet(void)
{
char letter = 'a';
while(letter<='z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

#endif
