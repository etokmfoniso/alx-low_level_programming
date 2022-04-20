#include "main.h"
/**
 * _strlen - length of the string
 *
 * @s: given string 
 * Return: always 1
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
