#include "main.h"
#include <string.h>
/**
* print_rev - prints string in reverse
* @s: string to be reversed
* Return: none.
*/
void print_rev(char *s)
{
char *lastchar = s + strlen(s) - 1;
int n = strlen(s);
while (n--)
{
_putchar(*lastchar);
lastchar--;
}
_putchar('\n');
}
