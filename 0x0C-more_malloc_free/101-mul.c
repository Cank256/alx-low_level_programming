#include "main.h"

/**
 * validate_number - Validates if a string contains only digits.
 * @num: The string to validate.
 *
 * Return: 1 if the string is valid, 0 otherwise.
 */
int validate_number(const char *num)
{
int i = 0;

while (num[i] != '\0')
{
if (num[i] < '0' || num[i] > '9')
{
return (0);
}

i++;
}
return (1);
}

/**
 * multiply - Multiplies two positive numbers and prints the result.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 */
void multiply(const char *num1, const char *num2)
{
int len1 = 0, len2 = 0, i = 0, j;
int *result;

while (num1[len1] != '\0')
{
len1++;
}

while (num2[len2] != '\0')
{
len2++;
}

result = malloc(sizeof(int) * (len1 + len2));

for (i = 0; i < len1 + len2; i++)
{
result[i] = 0;
}

for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
int product = (num1[i] - '0') * (num2[j] - '0');
int sum = result[i + j + 1] + product;
result[i + j] += sum / 10;
result[i + j + 1] = sum % 10;
}
}
while (result[i] == 0 && i < len1 + len2 - 1)
{
i++;
}
for (; i < len1 + len2; i++)
{
printf("%d", result[i]);
}
printf("\n");
free(result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 if the arguments are invalid.
 */
int main(int argc, char *argv[])
{
if (argc != 3 || !validate_number(argv[1]) || !validate_number(argv[2]))
{
printf("Error\n");
return (98);
}

multiply(argv[1], argv[2]);

return (0);
}
