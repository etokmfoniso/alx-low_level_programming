#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints values a argv
 * @argc: argument count
 * @argv: array of argument value
 * Return: Always 0
 */

int main(int argc , char **argv)
{
int i;

if (argc > 0)
{
for (i = 0; i <= argc; i++)
{
printf("%s\n", argv[i]);
}
}

return (0);
}
