#include "main.h"

/**
 * swap_int - function to swap values of two integers.
 *
 * @a: swap input
 * @b: swap input
 * Return: a,b
 */
void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
