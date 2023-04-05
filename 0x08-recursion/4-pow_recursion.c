#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Function that returns the value of x raised to the power of y
 * @x: The value to be raise
 * @y: The power
 *
 * Return: Value of x raised to power y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

return (x * _pow_recursion(x, y - 1));
}
