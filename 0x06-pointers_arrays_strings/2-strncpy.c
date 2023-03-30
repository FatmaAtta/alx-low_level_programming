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
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
