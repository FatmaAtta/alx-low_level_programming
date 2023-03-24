#include "main.h"
/**
 * _isdigit - checks if character is a number
 * @c: character to be tested
 * Return: 1 if digit or 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
