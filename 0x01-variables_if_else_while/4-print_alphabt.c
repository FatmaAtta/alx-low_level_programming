#include <stdio.h>
/**
 * main - used 2 for loops
 * Return: 0
 */
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
if (i != 101 && i != 113)
{
putchar(i);
}
else
{
continue;
}
}
putchar('\n');
return (0);
}
