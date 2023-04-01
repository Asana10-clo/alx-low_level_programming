#include "main.h"

/**
 * reverse_array - reverses content of an array
 * @a: array
 * @n: number of elements to reverse
 * Return: reverse array
 */
void reverse_array(int *a, int n)
{
int x;
int y;
for (x = 0; x < n / 2; x++)
{
y = a[x];
a[x] = a[n - 1 - x];
a[n - 1 - x] = y;
}
}
