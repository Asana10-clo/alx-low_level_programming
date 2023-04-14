#include "main.h"

/**
 * _strstr - finds a string
 * @haystack: main string
 * @needle: string to search for
 * Return: string pointer
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j = 0;
while (needle[j] != '\0')
j++;
{
while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (i != j)
haystack++;
else
return (haystack);
}
return (NULL);
}
}
