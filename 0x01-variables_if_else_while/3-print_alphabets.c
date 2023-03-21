#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)

{
int x = 'A';

while (x <= 'Z')
{
char lower = tolower(x);
putchar (lower);
x++;
}


while (x <= 'Z')
{
char lower  = toupper(x);
putchar (lower);
x++;
}
putchar ('\n');
return (0);
}
