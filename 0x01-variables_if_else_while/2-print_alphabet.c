#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *Description: code to print alphabets in lowercase.
 * Return: always 0 (success)
 */
int main(void)

{
int x = 'A';


while (x <= 'Z')
{
char lower = tolower(x);
putchar(lower);
x++;
}
putchar('\n');
return (0);
}
