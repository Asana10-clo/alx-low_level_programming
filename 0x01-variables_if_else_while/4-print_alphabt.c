#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
char bet;

for (bet = 'a'; bet <= 'z'; bet++)
{
if (bet != 'q' && bet != 'e')
putchar(bet);
}
putchar('\n');
return (0);
}
