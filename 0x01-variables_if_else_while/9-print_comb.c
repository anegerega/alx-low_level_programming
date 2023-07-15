#include <stdio.h>

/**
*main - Prints all single digits on a new line with comma and space.
*
*Return: 0 (Success)
*/

int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(48 + n);
putchar(',');
putchar(' ');
if (n == 9)
break;
}
return (0);
}
