#include <stdio.h>

/**
 * main - A program that prints its name, followed by a new line
 * @argc: Number of arguments
 * @argv: Arguments' array
 *
 * Return: void
 */
int main(int argc, char **argv)
{
(void)argc;

printf("%s\n", argv[0]);

return (0);
}
