#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: the arguments
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
