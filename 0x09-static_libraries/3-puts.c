#include "main.h"
/**
 *_puts - function to print a string with a new line.
 *@str: character input
 * Return: string
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}
