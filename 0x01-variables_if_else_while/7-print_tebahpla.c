#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
char bet;
for (bet = 'z'; bet >= 'a'; bet--)
{
putchar(bet);
}
putchar('\n');
return (0);
}
