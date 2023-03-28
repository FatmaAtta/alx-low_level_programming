#include "main.h"
/**
* _strlen - finds length of string
* @s: string to be tested
* Return: length
*/
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
