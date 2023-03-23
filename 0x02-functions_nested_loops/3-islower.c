#include <stdio.h>
#iclude "main.h"

int _islower(int c)
{
if(c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

int main()
{
char c1 = 'a';
char c2 = 'A';
if (_islower(c1))
{
printf("%c is lowercase\n", c1);
}
else
{
printf("%c is not lowercase\n", c1);
}
if (_islower(c2))
{
printf("%c is lowercase\n", c2);
}
else
{
printf("%c is not lowercase\n", c2);
}
return 0;
}
