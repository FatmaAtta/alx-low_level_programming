#include "main.h"

/**
* reverse_array - reverses an array
* @a: an array of integers
* @n: size on array
* Return: nothing.
*/
void reverse_array(int *a, int n)
{
int temp;
int *l = a + n - 1;
while (a < l)
{
temp = *a;
*a = *l;
*l = temp;
a++;
l--;
}
}
