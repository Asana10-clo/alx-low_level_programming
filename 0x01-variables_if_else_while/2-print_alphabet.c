#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Returns: always 0 (success)
 */
int main(void)
{
int x = 'A';
while (x <= 'Z')
x++;
{
char lower = tolower(x);
putchar(lower);
}

return (0);
}
