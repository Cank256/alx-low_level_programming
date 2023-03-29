#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
char *ptr = str;
char *leet_chars = "aAeEoOtTlL";
char *leet_nums = "4433007711";

for (; *ptr != '\0'; ptr++)
{
int i;
for (i = 0; i < 10; i++)
{
if (*ptr == leet_chars[i])
{
*ptr = leet_nums[i];
break;
}
}
}

return str;
}
