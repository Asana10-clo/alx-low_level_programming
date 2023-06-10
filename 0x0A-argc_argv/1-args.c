#include "main.h"

/**
 * main - prints number of args passed
 * @argc: number of args
 * @argv: array of args
 * Return: output
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
