#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program calculates the 
 * sum of all the multiples of 3 or 5
 * below 1024 and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main()
{
int sum = 0;
for (int i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return 0;
}
