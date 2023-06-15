#include "main.h"

/**
 * print_times_table - Prints the times table of a given number
 * @n: The number to generate the times table for
 *
 * Description: This function prints the times table of the given number,
 * ranging from 0 to n. The table is printed in a tabular format.
 * The function handles cases where n is negative or greater than 15.
 */
void print_times_table(int n)
{
int i, j;

if (n < 0 || n > 15)
{
return;
}

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
printf("%d\t", i * j);
}
printf("\n");
}
}
