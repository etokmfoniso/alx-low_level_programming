#include "main.h"
/**
 * _memset - fill a memory with a constant byte
 * @s: memory to be fill
 * @b: value to be filled
 * @n:bytes of memory to be fill
 * Return: filled memory is returned
 */

char *_memset(char *s, char b, unsigned int n);
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
}

return (s);
}
