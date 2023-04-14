#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string
 * @accept: bytes string
 * Return: bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int p;
int q;
while (*s)
{
for (q = 0; accept[q]; q++)
{
if (*s == accept[q])
{
p++;
break;
}
else if (accept[q + 1] == '\0')
return (p);
}
s++;
}
return (p);
}
