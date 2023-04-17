#include "main.h"

/**
* _print_rev_recursion - reverses a string
* @s: string to be reversed
* Return: None.
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
if (*s == '\0')
{
_putchar('\n');
}
}
