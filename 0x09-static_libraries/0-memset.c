#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string input
 * @b: string input
 * @n: n bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
int p;
for (p = 0; n > 0; p++)
{
s[p] = b;
n--;
}
return (s);
}
