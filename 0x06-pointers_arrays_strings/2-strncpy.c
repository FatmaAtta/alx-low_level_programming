#include "main.h"
/**
* _strncpy - copies a string
* @dest: destination
* @src: string to be copied
* @n: max number of characters
* Return: returns copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
while (n--)
{
*dest = *src;
dest++;
src++;
}
return (dest);
}
