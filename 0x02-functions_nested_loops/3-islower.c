#include "main.h"
/**
 * _islower - returns 1 if letter is lowercase
 * @c: the ascii code of the character to be tested
 * Return: 1 if lowercase 0 if anything else
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
