#include "main.h"
/**
* _strncat - concatenates
* @dest: first string
* @src: second string
* @n: number of bytes
* Return:  pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}
while (*src != '\0' && i < n)
{
*ptr = *src;
ptr++;
src++;
i++;
}
if (i < n)
{
*ptr = '\0';
}
return (dest);

}
