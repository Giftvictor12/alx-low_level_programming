#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - check the code for Holberton School students.
* @s: character of string
* Return: Always 0.
*/

void _puts_recursion(char *s)
{
if (*(s) != '\0')
{
putchar(*s);
_puts_recursion(s + 1);
}
if (*(s) == '\0')
putchar('\n');
}
