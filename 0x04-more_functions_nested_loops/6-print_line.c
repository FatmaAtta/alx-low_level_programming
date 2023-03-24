#include "main.h"
/**
 * print_line - prints a line
 * @n: length of the line
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar(95);
}
}
_putchar('\n');
}
