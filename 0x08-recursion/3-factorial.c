#include "main.h"
#include <stdio.h>

/**
 * factorial - Function that returns the factorial of a given number
 * @n: The number
 *
 * Return: Factorial of the number
 */
int factorial(int n)
{

if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}

return (n + factorial(n - 1));
}
