#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0-9
 * Return: numbers
 */
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
putchar((i % 10) + '0');
putchar('\n');
}
