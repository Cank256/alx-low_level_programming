#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
int num_bytes, i;
char *main_ptr;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}

main_ptr = (char *)main;

for (i = 0; i < num_bytes; i++)
{
printf("%02hhx", main_ptr[i]);
if (i != num_bytes - 1)
{
printf(" ");
}
}

printf("\n");
return (0);
}
