#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: array of args
 * Return: result
 */
int main(int argc, char *argv[])
{
int x, y;
if (argc == 3)
{
x = atoi(argv[1]);
y = atoi(argv[2]);
printf("%d\n", x * y);
return (0);
}
else
printf("Error\n");
return (1);
}
