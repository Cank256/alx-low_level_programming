#include <unistd.h>
/**
 * main - Prints a message to the standard error
 * Return: Always 1 (error code)
 */
int main(void)
{
char *message;
int length = 59;
int i;
message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
for (i = 0; i < length; i++)
{
write(2, &message[i], 1);
}
return (1);
}
