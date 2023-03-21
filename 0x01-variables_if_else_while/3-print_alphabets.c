#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
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
char upper = toupper(x);
putchar (upper);
x++;
}
putchar ('\n');
return (0);
}
