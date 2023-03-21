#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - entry point
 *
 * Return: always 0
 */
int main(void)
{
char bet;

for (bet = 'a'; bet <= 'z'; bet++)
{
putchar(bet);
}
for (bet = 'A'; bet <= 'Z'; bet++)
{
putchar(bet);
}
putchar ('\n');
return (0);
}
