#include "main.h"
/**
 * _isalpha - function that checks if char is alphabet
 * Return: 1 if it is alphabet 0 otherwise
 * @c: is the character to be tested
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
