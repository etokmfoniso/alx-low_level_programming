#include "main.h"
#include <stdio.h>
/**
 * main - program to count number of arguments 
 * @argc: number of arg
 * @argv: an array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

printf("%d\n", argc - 1);

return (0);
}
