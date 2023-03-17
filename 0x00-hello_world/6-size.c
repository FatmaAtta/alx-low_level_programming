#include <stdio.h>
/**
 * main - used sizeof() to find the sizes of some of the data types
 * Return: 0
 */
int main(void)
{
char character;
int integer;
long longint;
long long longlongint;
float floating;
printf("Size of a char: %lu byte(s)\n", sizeof(character));
printf("Size of an int: %lu byte(s)\n", sizeof(integer));
printf("Size of long int: %lu byte(s)\n", sizeof(longint));
printf("Size of long long int: %lu byte(s)\n", sizeof(longlongint));
printf("Size of a float: %lu byte(s)\n", sizeof(floating));
return (0);
}
