#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if  the input is a digit from 0 to 9
 *
 * @c: digit to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
if(c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
