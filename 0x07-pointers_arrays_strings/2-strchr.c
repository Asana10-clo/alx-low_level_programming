#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: string
 * Return: character
 */
char *_strchr(char *s, char c)
{
int p;
for (p = 0; s[p] != '\0'; p++)
{
if (s[p] == c)
return (&s[p]);
}
return (0);
}
