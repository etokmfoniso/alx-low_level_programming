#include "main.h"

/**
 * _strlen - length of the string
 *
 * @s: pointer to a string 
 * Return: void that means answer is correct
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
