#include <stdio.h>
#include "main.h"

/*
 * Using prototype
 * Return: (0)
 */

int print_alphabet(void)
{
char letter = 'a';
while(letter<='z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
return (0);
}

int main(void)
{
print_alphabet();
return (0);
}
