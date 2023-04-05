#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Function that returns the
 *                   natural square root of a number
 * @n: Number to get square root
 *
 * Return: Square root of a number
 */
int _sqrt_recursion(int n)
{

if (n < 0)
{
return (-1);
}
else
{
return (_sqrt_helper(n, 0, n));
}
}

int _sqrt_helper(int n, int min, int max)
{
int guess;

if (max < min)
{
return (-1);
}

guess = (min + max) / 2;

if ((guess * guess) == n)
{
return (guess);
}
else if ((guess * guess) < n)
{
return (_sqrt_helper(n, guess + 1, max));
}
else
{
return (_sqrt_helper(n, min, guess - 1));
}
}
