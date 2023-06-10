#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid_number - Checks if a string is a valid positive number
 * @str: String to be checked
 *
 * Return: 1 if valid, 0 otherwise
 */
int is_valid_number(char *str)
{
int i;

for (i = 0; str[i]; i++)
{
if (!isdigit(str[i]))
return (0);
}

return (1);
}

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
int i;
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (is_valid_number(argv[i]))
{
int num = atoi(argv[i]);
sum += num;
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);

return (0);
}
