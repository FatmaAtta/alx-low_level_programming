#include "main.h"

/**
* _puts_recursion - prints a string
* @s: string to be printed
* Return: none.
*/
void _puts_recursion(char *s)
{
_putchar(*s);
s++;
if (*s == '\0')
{
_putchar('\n');
return;
}
else
{
_puts_recursion(s);
}
}
