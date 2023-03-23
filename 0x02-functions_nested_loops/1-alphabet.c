#include <stdio.h>
#include "main.h"

static void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
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
