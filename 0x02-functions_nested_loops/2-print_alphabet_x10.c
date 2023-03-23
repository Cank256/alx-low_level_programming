#include <stdio.h>
#include "main.h"
/*
 * Using prototype
 * Return: (0)
 */

void print_alphabet_x10(void)
{
int i=0;
char letter = 'a';
while(i<10)
{
while(letter<='z')
{
_putchar(letter);
letter++
}
_putchar('\n');
i++;
}
}

int main()
{
print_alphabet_x10();
return (0);
}
