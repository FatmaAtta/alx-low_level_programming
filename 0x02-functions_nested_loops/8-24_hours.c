#include "main.h"

/**
* jack_bauer - prints every minute
*
* Return: void.
*/
void jack_bauer(void)
{
int j, a, b, c, d;
for (a = 0; a <= 2; a++)
{
if (a == 2)
{
j = 3;
}
else
{
j = 9;
}
for (b = 0; b <= j; b++)
{
for (c = 0; c <= 5; c++)
{
for (d = 0; d <= 9; d++)
{
_putchar(a + 48);
_putchar(b + 48);
_putchar(58);
_putchar(c + 48);
_putchar(d + 48);
_putchar('\n');
}
}
}
}
}
