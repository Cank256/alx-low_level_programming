#include <stdlib.h> // for malloc, free

char *_strdup(char *str) {

int length = 0;
int i;
char *duplicate = (char *)malloc((length + 1) * sizeof(char));

if (str == NULL)
{
return (NULL);
}

while (str[length] != '\0')
{
length++;
}

if (duplicate == NULL)
{
return (NULL);
}

for (i = 0; i <= length; i++)
{
duplicate[i] = str[i];
}

return (duplicate);
}
