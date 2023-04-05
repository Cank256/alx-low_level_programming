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
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_sqrt_helper(n, n / 2));
}
}

/**
 * _sqrt_helper - Function that helps return the
 *                   natural square root of a number
 * @n: Number to get square root
 * @guess: Guess value
 *
 * Return: Natural square root of a number
 */
int _sqrt_helper(int n, int guess)
{
int new_guess = (guess + (n / guess)) / 2;

if (new_guess == guess)
{
return (guess);
}
else
{
return (_sqrt_helper(n, new_guess));
}
}
