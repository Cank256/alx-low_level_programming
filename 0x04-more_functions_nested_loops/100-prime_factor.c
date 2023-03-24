#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
long num = 612852475143;
long largest_prime_factor = 2;
long i;

while (num % 2 == 0)
{
num /= 2;
}

for (i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
largest_prime_factor = i;
num /= i;
}
}

if (num > 2 && num > largest_prime_factor)
{
largest_prime_factor = num;
}

printf("%ld\n", largest_prime_factor);

return (0);
}
