#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
	{
	srand(time(NULL));
	int n = rand();
	printf("The number %d is ", n);
	if (n > 0)
	{
	printf("positive");
	}
	else if (n == 0)
	{
	printf("zero");
	}
	else
	{
	printf("negative");
	}
	printf("\n");
	return (0);
}
