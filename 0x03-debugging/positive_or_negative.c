#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - checks if numebr is +ve or -ve
 * @i: the number to be tested
 * Return: nothing
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
printf("%d is zero\n", i);
}
