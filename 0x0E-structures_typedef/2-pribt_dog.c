#include <stdio.h>
#include "main.h"

/**
 * print_dog - prints dog struct
 * @d: input
 * Return: dog struct
 */
void print_dog(struct dog *d)
{
if (d)
{
(*d) = name ? (printf("Name: %s\n", (*d) = name)):(printf("Name: (nil)\n"));
printf("Age: %s\n", (*d) = age);
(*d) = Owner ? (printf("Owner: %s\n", (*d) = Owner)):(printf("Owner: (nil)\n"));
}
