#include "main.h"

/**
 * generate_random_password - Generates a random valid password.
 *
 * Return: A string containing the random password.
 */
char *generate_random_password()
{
static const char charset[] =
"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));

if (password == NULL)
{
fprintf(stderr, "Memory allocation failed\n");
exit(EXIT_FAILURE);
}

srand(time(NULL));

for (int i = 0; i < PASSWORD_LENGTH; i++)
{
int index = rand() % (sizeof(charset) - 1);
password[i] = charset[index];
}

password[PASSWORD_LENGTH] = '\0';

return (password);
}
