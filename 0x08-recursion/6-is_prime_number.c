#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Function that returns 1 if the
 *                   input integer is a prime number,
 *                   otherwise return 0
 * @n: Number to get be checked
 *
 * Return: 1 if n is prime number and 0 if it is not
 */
int is_prime_number(int n)
{

if (n == 2)
{
return (1);
}
else if (n % 2 == 0)
{
return (1);
}
else if (n % 2 != 0)
{
return (0);
}
else
{
return (0);
}
}
