#include "main.h"

/**
* times_table - prints the time table
*
* Return: none.
*/
void times_table(void)
{
int i, j, prod;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
prod = i * j;
if (prod > 9)
{
int first_digit = prod / 10;
int last_digit = prod % 10;
_putchar(first_digit + 48);
_putchar(last_digit + 48);
}
else
{
_putchar(prod + 48);
}
_putchar(44);
_putchar(32);
}
_putchar('\n');
}
}
