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
    // Get the number of arguments (excluding the program name)
    int num_args = argc - 1;

    // Print the number of arguments
    printf("%d\n", num_args);

    return 0;
}

