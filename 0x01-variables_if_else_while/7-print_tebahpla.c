#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the lowercase alphabet in reverse, followed by a new line
*
*Return: Always 0
**/
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar(10);
return (0);
}
