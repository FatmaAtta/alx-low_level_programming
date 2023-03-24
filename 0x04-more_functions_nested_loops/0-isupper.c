#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if character is uppercase
 * @c: character to be tested
 * Return: 1 if upper and 0 if otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
