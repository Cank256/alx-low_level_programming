#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
int power = 1;

if (n < 0)
{
_putchar('-');
n *= -1;
}

while (n / power > 9)
{
power *= 10;
}

while (power > 0)
{
_putchar((n / power) + '0');
n %= power;
power /= 10;
}
}
