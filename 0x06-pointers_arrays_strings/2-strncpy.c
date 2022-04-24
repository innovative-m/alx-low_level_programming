#include "main.h"
/**
 * _strncpy - function to copy one string to another
 * @dest: the array that returns
 * @src: the pointer to r
 * @n: number of times to iterat
 *
 * Return: the parameter
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++
}
i = i;
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
