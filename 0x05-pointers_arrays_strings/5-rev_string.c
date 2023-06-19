#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Return: None.
 *
 * Description: This function takes a string pointer as a parameter
 * and reverses the characters in the string.
 */
void rev_string(char *s)
{
int length = _strlen(s);
int start = 0;
int end = length - 1;
char temp;

while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
