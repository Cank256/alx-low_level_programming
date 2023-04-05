#include "main.h"
#include <stdio.h>
#include <math.h>

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

int i;

if (n == 0 || n == 1)
{
return (0);
}

for (i = 2; i <= sqrt(n); i++)
{
if (n % i == 0)
{
return (0);
}
}

return (1);
}
