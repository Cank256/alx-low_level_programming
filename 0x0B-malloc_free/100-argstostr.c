#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of a program
 * @ac: The argument count
 * @av: An array of argument strings
 *
 * Return: A pointer to the concatenated string,
 *         or NULL if ac == 0 or av == NULL, or if it fails
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0, len = 0;
char *str;

if (ac == 0 || av == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
len++;
}
len++;
}

	str = malloc(sizeof(char) * (len + 1)); /* Allocate memory for the string */

if (str == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}

str[k] = '\0';

return (str);
}
