#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{

int num_args = argc - 1;

printf("%d\n", num_args);

(void)argv;

return (0);
}

