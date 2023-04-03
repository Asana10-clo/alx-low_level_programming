#include "main.h"

/**
 * _memcpy - function that copies memory
 * @dest: destination string
 * @src: source
 * @n: n bytes
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int p;
int q = n;
for (p = 0; p < q; p++)
{
dest[p] = src[p];
n--;
}
return (dest);
}
