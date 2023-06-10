#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: number of args
 * @argv: array of args
 * Return: output
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
