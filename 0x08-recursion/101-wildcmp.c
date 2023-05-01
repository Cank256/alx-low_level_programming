#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise returns 0. s2 can contain
 * the special character '*'.
 * The special character '*' can replace any string (including an empty string)
 *
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 1 if s1 and s2 are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
{
return (1);
}
else if (*s1 == '\0')
{
return (wildcmp(s1, s2 + 1));
}
else
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
}
else if (*s1 == '\0')
{
return (*s2 == '\0');
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
else
{
return (0);
}
}
