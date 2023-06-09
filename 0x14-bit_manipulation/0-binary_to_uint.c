#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 characters
 *
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int len = 0;
int i;

if (b == NULL)
{
return (0);
}

len = strlen(b);

for (i = 0; i < len; i++)
{
if (b[i] == '0')
{
result = (result << 1);
}
else if (b[i] == '1')
{
result = (result << 1) | 1;
}
else
{
return (0);
}
}

return (result);
}
