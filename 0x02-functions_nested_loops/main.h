#ifndef MAIN_H_
#define MAIN_H_

void foo();
int bar(int x, int y);
float baz(float a, float b, float c);

int _putchar(int c)
{
if (write(STDOUT_FILENO, &c, 1) != 1)
{
return EOF;
}
return c;
}
#endif
