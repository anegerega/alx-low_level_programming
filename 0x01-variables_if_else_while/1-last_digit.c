#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints last digit of a random number
*
* Return: Always 0 (Success)
*/

int main(void)
{
int n;
int lastDigit;

srand(time(NULL));
n = rand();
lastDigit = n % 10;
printf("Last digit of %d is %d\n", n, lastDigit);
return (0);
}
