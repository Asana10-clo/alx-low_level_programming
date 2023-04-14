#include "main.h"

/**
 * _strpbrk - searches strings for any set of bytes.
 * @s: string
 * @accept: bytes to search
 * Return:string byte
 */
char *_strpbrk(char *s, char *accept)
{
int p;
while (*s)
{
for (p = 0; accept[p] != '\0'; p++)
{
if (*s == accept[p])
	return (s);
}
s++;
}
return ('\0');
}
