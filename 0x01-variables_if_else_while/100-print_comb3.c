#include <stdio.h>
/**
 * main - used for loops
 * Return: 0
 */
int main(void)
{
int i, j;
for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
putchar(i);
putchar(j);
if (i != 56)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
