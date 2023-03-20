#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *Description: code to print alphabets in lowercase.
 * Returns: always 0 (success)
 */
int main(void)
{
int x = 'A';

srand(time(0));
while (x <= 'Z')
{
char lower = tolower(x);
putchar(lower + "\n");
x++;
}

return (0);
}
