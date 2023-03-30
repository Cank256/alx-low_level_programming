#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: the integer to print
 */

void print_number(int n)
{
int digit, is_negative = 0;
unsigned int num;

if (n < 0)
{
is_negative = 1;
num = -n;
}
else
{
num = n;
}

if (num / 10 != 0)
{
print_number(num / 10);
}

digit = num % 10;

if (is_negative)
{
_putchar('-');
}

_putchar(digit + '0');
}

