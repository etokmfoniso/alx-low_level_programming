#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
char lower_case;

for (lower_case = 122; lower_case >= 97; lower_case--)
{
putchar(lower_case);
}

putchar('\n');

return (0);

}
