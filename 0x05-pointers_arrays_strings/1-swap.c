#include "main.h"

/**
* swap_int - swaps 2 integers
* @a: integer to be swapped
* @b: integer to be swapped
* Return: None.
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
