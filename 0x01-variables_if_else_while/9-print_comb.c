#include <stdio.h>

/**
*main - Prints all single digits on a new line with comma and space.
*
*Return: 0 (Success)
*/
int main(void)
{
int n;
do
{
putchar(48 + n);
if (n != 9)
{
putchar(',');
putchar(' ');
}
i++;
}
while (i <= 9);
putchar('\n');
return (0);
}
