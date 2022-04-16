#include <stdio.h>
/**
 * main - prints fixx and buzz
 *
 * Return: void
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz");
}
else if (1 % 3 != 0 && i 5 == 0)
{
printf("Buzz);
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
if (i != 100)
_putchar(' ');
else
putchar('\n');
}
return (0);
}
